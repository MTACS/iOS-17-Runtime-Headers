
@interface HUSideBarWindowToolbarManager : NSObject <CAAnimationDelegate, HFHomeManagerObserver, HFHomeObserver, HUNavigationBarButtonOwner> {
    HOAppNavigator * _appNavigator;
    HUDashboardContext * _dashboardContext;
    NSArray * _dashboardStatusItems;
    <HUSideBarWindowToolbarManagerDelegate> * _delegate;
    unsigned long long  _discoverTabPosition;
    unsigned long long  _discoverTabStyle;
    NSString * _tabIdentifier;
    unsigned long long  _viewStyle;
}

@property (nonatomic, retain) HOAppNavigator *appNavigator;
@property (nonatomic, retain) HUDashboardContext *dashboardContext;
@property (nonatomic, retain) NSArray *dashboardStatusItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSideBarWindowToolbarManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long discoverTabPosition;
@property (nonatomic) unsigned long long discoverTabStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldIncludeRoomsInHomeMenu;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *tabIdentifier;
@property (nonatomic) unsigned long long viewStyle;

+ (id)sharedToolbarManager;

- (void).cxx_destruct;
- (void)_dashboardTabBackButton;
- (void)_discoverTabBackButton;
- (id)accessibilityLabelForToolbarItemIdentifier:(id)arg1;
- (SEL)actionForToolbarItemIdentifier:(id)arg1;
- (id)addActionDelegateForNavigationBarButton:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)appNavigator;
- (id)currentHome;
- (id)dashboardContext;
- (id)dashboardStatusItems;
- (id)delegate;
- (unsigned long long)discoverTabPosition;
- (unsigned long long)discoverTabStyle;
- (id)editActionDelegateForNavigationBarButton:(id)arg1;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (id)homeForNavigationBarButton:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (id)imageForToolbarItemIdentifier:(id)arg1;
- (id)initForTest;
- (id)initWithAppNavigator:(id)arg1;
- (id)itemIdentifiersForToolbar;
- (id)navigationActionDelegateForNavigationBarButton:(id)arg1;
- (id)navigationBarButtonForToolbarItemIdentifier:(id)arg1;
- (id)roomForNavigationBarButton:(id)arg1;
- (void)setAppNavigator:(id)arg1;
- (void)setDashboardContext:(id)arg1;
- (void)setDashboardStatusItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverTabPosition:(unsigned long long)arg1;
- (void)setDiscoverTabStyle:(unsigned long long)arg1;
- (void)setTabIdentifier:(id)arg1;
- (void)setViewStyle:(unsigned long long)arg1;
- (bool)shouldIncludeRoomsInHomeMenu;
- (bool)shouldUseDarkWindowAppearance;
- (id)statusItemsForNavigationBarButton:(id)arg1 inHome:(id)arg2;
- (id)tabIdentifier;
- (unsigned long long)toolbarItemStyleForToolbarItemIdentifier:(id)arg1;
- (unsigned long long)viewStyle;
- (id)windowTitle;

@end
