
@interface DBProcessMonitor : NSObject <BSInvalidatable> {
    NSMapTable * _handleMapTable;
    CARObserverHashTable * _observers;
    CRCarPlayAppPolicyEvaluator * _policyEvaluator;
    RBSProcessMonitor * _processMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMapTable *handleMapTable;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic, retain) CRCarPlayAppPolicyEvaluator *policyEvaluator;
@property (nonatomic, retain) RBSProcessMonitor *processMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appStateUpdated:(id)arg1 processHandle:(id)arg2;
- (void)_handleDeathWithIdentifier:(id)arg1 isCrash:(bool)arg2 pid:(int)arg3;
- (void)_startMonitoringProcess;
- (void)addObserver:(id)arg1;
- (id)handleMapTable;
- (id)init;
- (void)invalidate;
- (id)observers;
- (id)policyEvaluator;
- (id)processMonitor;
- (void)setHandleMapTable:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPolicyEvaluator:(id)arg1;
- (void)setProcessMonitor:(id)arg1;

@end
