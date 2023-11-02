
@interface AVRemoteFigSampleBufferRenderSynchronizerFactory : NSObject <AVFigSampleBufferRenderSynchronizerFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct OpaqueFigSampleBufferRenderSynchronizer { }*)createRenderSynchronizerWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 error:(id*)arg3;

@end
