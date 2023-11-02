
@protocol AVFigSampleBufferRenderSynchronizerFactory <NSObject>

@required

- (struct OpaqueFigSampleBufferRenderSynchronizer { }*)createRenderSynchronizerWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 error:(id*)arg3;

@end
