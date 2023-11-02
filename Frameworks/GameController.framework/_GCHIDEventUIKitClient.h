
@interface _GCHIDEventUIKitClient : _GCHIDEventSubject <BKSHIDEventDeliveryPolicyObserving> {
    BKSHIDEventDeliveryPolicyObserver * _hidObserver;
    bool  _hidObserverWasActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)observerDeliveryPolicyDidChange:(id)arg1;
- (void)publishHIDEvent:(struct __IOHIDEvent { }*)arg1;

@end
