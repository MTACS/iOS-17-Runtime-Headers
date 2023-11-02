
@interface HKWorkoutControl : NSObject <HKWorkoutControlClient, _HKXPCExportable> {
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
- (void)finishAllWorkoutsWithCompletion:(id /* block */)arg1;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)generatePauseOrResumeRequest:(id /* block */)arg1;
- (void)generatePauseOrResumeRequestAllowingBackgroundRuntime:(bool)arg1 completion:(id /* block */)arg2;
- (void)generateWorkoutMarkerWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
