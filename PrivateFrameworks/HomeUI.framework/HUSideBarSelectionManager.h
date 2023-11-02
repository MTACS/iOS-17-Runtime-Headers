
@interface HUSideBarSelectionManager : NSObject {
    HUDashboardContext * _currentContext;
    NSString * _currentTabIdentifier;
    <HUSideBarSelectionManagerDelegate> * _delegate;
    HUSideBarItemManager * _sideBarItemManager;
    HUSideBarViewController * _sideBarViewController;
}

@property (nonatomic, retain) HUDashboardContext *currentContext;
@property (nonatomic, readonly) HFItem *currentSelectedItem;
@property (nonatomic, retain) NSString *currentTabIdentifier;
@property (nonatomic, readonly) <HFHomeKitObject><HMApplicationData> *dashboarHomeKitObject;
@property (nonatomic, retain) <HUSideBarSelectionManagerDelegate> *delegate;
@property (nonatomic, retain) HUSideBarItemManager *sideBarItemManager;
@property (nonatomic, retain) HUSideBarViewController *sideBarViewController;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_didUpdateToAutomationTab;
- (void)_didUpdateToDiscoverTab;
- (void)_didUpdateToHomeTab;
- (void)_didUpdateToTabForCategory:(id)arg1;
- (void)_didUpdateToTabForRoom:(id)arg1;
- (void)_updateAppearanceForSidebar;
- (void)_updateSidebarSelection;
- (id)currentContext;
- (id)currentSelectedItem;
- (id)currentTabIdentifier;
- (id)dashboarHomeKitObject;
- (id)delegate;
- (id)initForTest;
- (id)initWithSideBarViewController:(id)arg1 sideBarItemManager:(id)arg2 delegate:(id)arg3;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentTabIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSideBarItemManager:(id)arg1;
- (void)setSideBarViewController:(id)arg1;
- (id)sideBarItemManager;
- (id)sideBarViewController;
- (void)updateWithSideBarViewController:(id)arg1 sideBarItemManager:(id)arg2;

@end
