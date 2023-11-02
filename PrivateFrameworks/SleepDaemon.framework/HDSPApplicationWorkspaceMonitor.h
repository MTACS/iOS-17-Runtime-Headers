
@interface HDSPApplicationWorkspaceMonitor : NSObject <LSApplicationWorkspaceObserverProtocol> {
    HKSPObserverSet * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;
- (bool)isApplicationInstalled:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;

@end
