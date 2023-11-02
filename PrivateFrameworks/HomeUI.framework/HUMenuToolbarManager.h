
@interface HUMenuToolbarManager : NSObject <HFHomeManagerObserver, HFHomeObserver> {
    HOAppNavigator * _appNavigator;
    HMHome * _home;
    <UIMenuBuilder> * _menuBuilder;
    HMRoom * _room;
}

@property (nonatomic) HOAppNavigator *appNavigator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) <UIMenuBuilder> *menuBuilder;
@property (nonatomic, retain) HMRoom *room;
@property (readonly) Class superclass;

+ (bool)isValidMenuSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)_automationMenuSelected;
- (id)_buildActionForIdentifier:(id)arg1;
- (id)_buildHomeMenu;
- (id)_buildKeyCommandForIdentifier:(id)arg1;
- (id)_buildMenuForIdentifier:(id)arg1;
- (void)_discoverMenuSelected;
- (void)_editHomeMenuSelected;
- (id)_editMenuIdentifiers;
- (void)_editRoomMenuSelected;
- (id)_fileMenuIdentifiers;
- (id)_helpMenuIdentifiers;
- (void)_homeMenuSelected;
- (bool)_shouldEnableIdentifier:(id)arg1;
- (id)_subViewMenuIdentifiers;
- (id)_viewMenuIdentifiers;
- (id)appNavigator;
- (void)buildMenu;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didSelectRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (id)initWithAppNavigator:(id)arg1;
- (id)menuBuilder;
- (void)refreshEditMenu;
- (void)refreshFileMenu;
- (void)refreshHelpMenu;
- (void)refreshViewMenu;
- (void)refreshViewMenuChildren;
- (id)room;
- (void)setAppNavigator:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMenuBuilder:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)updateHome:(id)arg1;

@end
