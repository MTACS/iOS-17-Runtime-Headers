
@interface WDSourceOrderController : NSObject {
    NSHashTable * _observers;
    HKSourceStore * _sourceStore;
}

- (void).cxx_destruct;
- (void)_notifyObserversForDataType:(id)arg1 withProviders:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)getOrderedSourcesForDataType:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setOrderedSources:(id)arg1 dataType:(id)arg2;

@end
