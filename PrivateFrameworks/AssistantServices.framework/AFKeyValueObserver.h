
@interface AFKeyValueObserver : NSObject <AFKeyValueObserving> {
    AFKeyValueObservingDeliveryOptions * _deliveryOptions;
    id /* block */  _handler;
    AFOneArgumentSafetyBlock * _invalidation;
    _Atomic bool  _isInvalid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleObservedChangeWithOldValue:(id)arg1 andNewValue:(id)arg2;
- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 handler:(id /* block */)arg3 deliveryOptions:(id)arg4;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
