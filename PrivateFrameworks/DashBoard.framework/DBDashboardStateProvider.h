
@interface DBDashboardStateProvider : NSObject <DBHomeViewPageChangeObserving, DBWorkspaceObserver> {
    NSString * _activeBundleIdentifier;
    bool  _connectionReady;
    DBDashboard * _dashboard;
    unsigned long long  _lockoutState;
    CARObserverHashTable * _observers;
    unsigned long long  _pageType;
}

@property (nonatomic, copy) NSString *activeBundleIdentifier;
@property (nonatomic) bool connectionReady;
@property (nonatomic, readonly) DBDashboard *dashboard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lockoutState;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic) unsigned long long pageType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshObservations;
- (id)activeBundleIdentifier;
- (void)addObserver:(id)arg1;
- (bool)connectionReady;
- (id)dashboard;
- (void)homeViewController:(id)arg1 didChangeToPageIndex:(long long)arg2 firstIconPageIndex:(long long)arg3 minimumPageIndex:(long long)arg4;
- (id)initWithDashboard:(id)arg1;
- (unsigned long long)lockoutState;
- (id)observers;
- (unsigned long long)pageType;
- (void)removeObserver:(id)arg1;
- (void)setActiveBundleIdentifier:(id)arg1;
- (void)setConnectionReady:(bool)arg1;
- (void)setLockoutState:(unsigned long long)arg1;
- (void)setObservers:(id)arg1;
- (void)setPageType:(unsigned long long)arg1;
- (void)workspace:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;

@end
