
@protocol AVFigSampleBufferAudioRendererFactory <NSObject>

@required

- (struct OpaqueFigSampleBufferAudioRenderer { }*)createAudioRendererWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 error:(id*)arg3;

@end
