
@interface WFNetworkBehaviorMonitor : NSObject {
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSHashTable *observers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)logNetworkEvent:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;

@end
