
@interface ASDCrossfireStore : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;

- (void).cxx_destruct;
- (void)flushMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)getAppEventsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)arg1;
- (void)recordMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resetMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)sendMetricsWithCompletionBlock:(id /* block */)arg1;

@end
