
@interface _HKUserDefaultsBridgedObserver : NSObject {
    HKObserverBridgeHandle * _handle;
}

@property (nonatomic, readonly) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (id)handle;
- (id)initWithHandle:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
