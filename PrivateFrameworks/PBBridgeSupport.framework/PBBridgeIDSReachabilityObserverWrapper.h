
@interface PBBridgeIDSReachabilityObserverWrapper : NSObject {
    <PBBridgeIDSReachabilityObserver> * _observer;
}

@property (nonatomic) <PBBridgeIDSReachabilityObserver> *observer;

- (void).cxx_destruct;
- (void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3;
- (id)observer;
- (void)setObserver:(id)arg1;

@end
