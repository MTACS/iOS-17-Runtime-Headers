
@interface HKObserverBridgeHandle : NSObject {
    HKObserverBridge * _bridge;
}

@property (nonatomic, readonly) HKObserverBridge *bridge;

- (void).cxx_destruct;
- (id)bridge;
- (id)initWithBridge:(id)arg1;
- (bool)notifyObserversOfChangeForKey:(id)arg1 newValue:(id)arg2;

@end
