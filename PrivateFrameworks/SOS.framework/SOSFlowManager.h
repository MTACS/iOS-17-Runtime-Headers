
@interface SOSFlowManager : NSObject <SOSFlowManagerCoexProtocol, SOSFlowObserver> {
    SOSFlow * _activeSOSFlow;
    HKHealthStore * _healthStore;
}

@property (nonatomic, retain) SOSFlow *activeSOSFlow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)activeSOSFlow;
- (void)emergencyCallInitiated;
- (id)init;
- (void)kappaWasRequested;
- (void)setActiveSOSFlow:(id)arg1;
- (void)sosFlow:(id)arg1 didChangeToState:(long long)arg2;
- (void)sosFlow:(id)arg1 willHandleEvent:(unsigned long long)arg2 withMetaData:(id)arg3;
- (void)startFreshSOSFlowWithTriggerMechanism:(long long)arg1;
- (void)startSOSFlowWithTriggerMechanism:(long long)arg1;

@end
