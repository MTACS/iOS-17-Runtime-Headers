
@interface FINodeObserver : NSObject {
    struct OpaqueEventNotifier { } * _notifier;
    FINode * _observedNode;
}

+ (id)observerForFINode:(id)arg1 withObserver:(id)arg2;
+ (id)propertyName:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (void)startObserving:(unsigned int)arg1;
- (void)stopObserving:(unsigned int)arg1;

@end
