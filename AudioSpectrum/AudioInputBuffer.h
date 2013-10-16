#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface AudioInputBuffer : NSObject
{
    AudioQueueRef audioQueue;
    AudioQueueBufferRef *lastBuffers;
}

- (void)start;
- (void)stop;
- (void)pushBuffer:(AudioQueueBufferRef)buffer;
- (NSUInteger)copyWaveformTo:(Float32 *)destination length:(NSUInteger)length;

@end
