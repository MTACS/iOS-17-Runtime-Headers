
@interface HKHeadphoneAudioExposureControl : NSObject <HKHeadphoneAudioExposureControlClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchDoseLimitInfoWithCompletion:(id /* block */)arg1;
- (void)fetchInfoWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(bool)arg4 synced:(bool)arg5 completion:(id /* block */)arg6;
- (void)overrideDoseLimit:(id)arg1 completion:(id /* block */)arg2;
- (void)rebuildWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;

@end
