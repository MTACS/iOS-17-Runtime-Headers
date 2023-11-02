
@interface DBNavigationStateProvider : NSObject <BSInvalidatable, CARActiveNavigationIdentifiersObserving, DBAppHistoryObserving> {
    CARActiveNavigationIdentifiersObserver * _activeNavigationIdentifiersObserver;
    <DBAppHistoryAppDockProviding> * _appHistoryAppDockProvider;
    <DBIconProviding> * _iconProvider;
    <DBNavigationAppInfoProviding> * _infoProvider;
    NSString * _mostRecentlyActivatedClusterApp;
    NSString * _mostRecentlyActivatedDashboardApp;
    CARObserverHashTable * _observers;
}

@property (nonatomic, retain) CARActiveNavigationIdentifiersObserver *activeNavigationIdentifiersObserver;
@property (nonatomic) <DBAppHistoryAppDockProviding> *appHistoryAppDockProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <DBIconProviding> *iconProvider;
@property (nonatomic) <DBNavigationAppInfoProviding> *infoProvider;
@property (nonatomic, readonly) NSString *mostRecentClusterNavigatingApp;
@property (nonatomic, readonly) NSString *mostRecentDashboardNavigatingApp;
@property (nonatomic, readonly) NSString *mostRecentNavigatingApp;
@property (nonatomic, copy) NSString *mostRecentlyActivatedClusterApp;
@property (nonatomic, copy) NSString *mostRecentlyActivatedDashboardApp;
@property (nonatomic, readonly) NSArray *navigatingIdentifiers;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithActiveNavigationIdentifiersObserver:(id)arg1;
- (void)_updateMostRecentClusterApp;
- (void)_updateMostRecentDockApp;
- (id)activeNavigationIdentifiersObserver;
- (void)activeNavigationIdentifiersObserver:(id)arg1 updatedActiveNavigationIdentifiers:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)appHistory:(id)arg1 mostRecentHomeScreenUpdatedTo:(id)arg2;
- (void)appHistory:(id)arg1 mostRecentNavigationAppUpdatedTo:(id)arg2;
- (void)appHistory:(id)arg1 mostRecentOtherAppUpdatedTo:(id)arg2;
- (id)appHistoryAppDockProvider;
- (id)iconProvider;
- (id)infoProvider;
- (id)init;
- (void)invalidate;
- (id)mostRecentClusterNavigatingApp;
- (id)mostRecentDashboardNavigatingApp;
- (id)mostRecentNavigatingApp;
- (id)mostRecentlyActivatedClusterApp;
- (id)mostRecentlyActivatedDashboardApp;
- (id)navigatingIdentifiers;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setActiveNavigationIdentifiersObserver:(id)arg1;
- (void)setAppHistoryAppDockProvider:(id)arg1;
- (void)setIconProvider:(id)arg1;
- (void)setInfoProvider:(id)arg1;
- (void)setMostRecentlyActivatedClusterApp:(id)arg1;
- (void)setMostRecentlyActivatedDashboardApp:(id)arg1;
- (void)setObservers:(id)arg1;

@end
