
@interface HDCloudSyncPipelineStageWaitForDeviceToDeviceEncryptionAvailability : HDCloudSyncPipelineStage {
    double  _expirationInterval;
    NSObject<OS_dispatch_source> * _expirationTimer;
}

- (void).cxx_destruct;
- (void)_cloudKitIdentityUpdated:(id)arg1;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)main;
- (void)unitTest_setExpirationInterval:(double)arg1;

@end
