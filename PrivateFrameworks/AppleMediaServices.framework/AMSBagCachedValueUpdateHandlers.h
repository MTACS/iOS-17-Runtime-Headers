
@interface AMSBagCachedValueUpdateHandlers : NSObject {
    void handlerQueue;
    void lock;
}

+ (unsigned long long)uninitializedToken;

- (void).cxx_destruct;
- (unsigned long long)addHandlerWithKeys:(id)arg1 initialValues:(id)arg2 handler:(id /* block */)arg3;
- (unsigned long long)addHandlerWithKeys:(id)arg1 initialValues:(id)arg2 metricsTracker:(id)arg3 handler:(id /* block */)arg4;
- (void)callHandlersUsingNewBagDictionary:(id)arg1 changedKeys:(id)arg2;
- (id)init;
- (id)initWithHandlerQueue:(id)arg1;
- (void)removeHandlerWithToken:(unsigned long long)arg1;

@end
