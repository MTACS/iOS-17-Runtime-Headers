
@protocol AVCaptureDataOutputDelegateOverride <NSObject>

@required

- (id)delegateOverride;
- (NSObject<OS_dispatch_queue> *)delegateOverrideCallbackQueue;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(NSObject<OS_dispatch_queue> *)arg2;

@end
