
@interface SiriAnalyticsSensitiveConditionsObservers : NSObject {
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)addSensitiveConditionsObserver:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)pollAllObserversWithCompletion:(id /* block */)arg1;

@end
