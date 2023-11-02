
@interface TIAnalyticsService : NSObject {
    NSMutableDictionary * _eventSpecs;
    <TIAnalyticsServiceProvider> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableDictionary *eventSpecs;
@property (nonatomic, readonly) <TIAnalyticsServiceProvider> *provider;

+ (void)setMockInstance:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dispatchEventToDomain:(id)arg1 withName:(id)arg2 payload:(id)arg3 values:(id)arg4 inputMode:(id)arg5 testingParameters:(id)arg6 allowSparsePayload:(bool)arg7 withCompletionHandler:(id /* block */)arg8;
- (void)_registerEventSpec:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3;
- (void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)dispatchEventToInputAnalyticsDomainWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(bool)arg4;
- (void)dispatchEventWithName:(id)arg1;
- (bool)dispatchEventWithName:(id)arg1 error:(id*)arg2;
- (void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2;
- (bool)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id*)arg3;
- (void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(bool)arg4;
- (bool)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(bool)arg4 error:(id*)arg5;
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2;
- (bool)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id*)arg3;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3;
- (bool)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id*)arg4;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dispatchEventWithName:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)eventSpecs;
- (id)init;
- (id)initWithProvider:(id)arg1;
- (id)provider;
- (void)queueCompletionHandler:(id /* block */)arg1;
- (void)registerEventSpec:(id)arg1;
- (bool)registerEventSpec:(id)arg1 error:(id*)arg2;
- (void)registerEventSpec:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)sendCoreAnalyticsEventToDomain:(id)arg1 withName:(id)arg2 payload:(id)arg3;
- (id)settingsFromInputMode:(id)arg1 eventSpec:(id)arg2 errors:(id)arg3;
- (id)settingsFromPayload:(id)arg1 andValues:(id)arg2 eventSpec:(id)arg3 allowSparsePayload:(bool)arg4 errors:(id)arg5;

@end
