
@protocol BWNodeBackPressureSource <NSObject>

@required

- (NSObject<OS_dispatch_semaphore> *)emitSampleBufferSemaphore;
- (bool)firstFrameProcessed;
- (void)setEmitSampleBufferSemaphore:(NSObject<OS_dispatch_semaphore> *)arg1;
- (void)setFirstFrameProcessed:(bool)arg1;

@end
