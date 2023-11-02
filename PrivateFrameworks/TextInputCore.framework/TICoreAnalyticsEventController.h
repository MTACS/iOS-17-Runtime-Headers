
@interface TICoreAnalyticsEventController : NSObject {
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (void)registerScheduledEventsActivity;

- (void).cxx_destruct;
- (id)adjustValue:(id)arg1 forFieldSpec:(id)arg2;
- (id)adjustValues:(id)arg1 forFieldSpec:(id)arg2;
- (void)dispatchEventWithDescriptor:(id)arg1 andSpec:(id)arg2 withProvider:(id)arg3 andContext:(id)arg4 andMetrics:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 eventSpec:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)dispatchEventsFromRegistry:(id)arg1 withProvider:(id)arg2 andContext:(id)arg3 andMetrics:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)dispatchScheduledEventsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)queueScheduledEventsWithCompletionHandler:(id /* block */)arg1;

@end
