
@interface WBProfileWindow : NSObject <WBTabGroupManagerObserver> {
    NSString * _activeProfileIdentifier;
    NSString * _activeTabGroupUUID;
    bool  _canSwitchProfiles;
    <WBProfileWindowDelegate> * _delegate;
    NSString * _deviceName;
    WBTabGroupManager * _tabGroupManager;
    id /* block */  _unnamedTabGroupDisplayTitleProvider;
    WBWindowState * _windowState;
}

@property (nonatomic, copy) NSString *activeProfileIdentifier;
@property (nonatomic, copy) NSString *activeTabGroupUUID;
@property (nonatomic) bool canSwitchProfiles;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBProfileWindowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInDefaultProfile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unnamedTabGroupDisplayTitleProvider;
@property (nonatomic, readonly, copy) WBTabGroup *unnamedTabGroupForActiveProfile;

- (void).cxx_destruct;
- (void)_attachLocalGroupToDefaultProfileIfNeeded;
- (void)_attachUnnamedTabGroupToProfileWithIdentifier:(id)arg1;
- (id /* block */)_displayTitleProviderForTabGroupWithUUID:(id)arg1;
- (id)_existingUnnamedTabGroupForProfileWithIdentifier:(id)arg1;
- (id)_findOrCreateUnnamedTabGroupForProfile:(id)arg1;
- (bool)_isProfileActive:(id)arg1;
- (id)_lastActiveTabGroupForProfile:(id)arg1;
- (void)_selectPreferredProfileIfNeeded:(id)arg1;
- (id)activeProfileIdentifier;
- (id)activeTabGroupUUID;
- (bool)canSwitchProfiles;
- (void)dealloc;
- (id)delegate;
- (id)deviceName;
- (id)initWithWindowState:(id)arg1 tabGroupManager:(id)arg2 deviceName:(id)arg3;
- (id)initWithWindowState:(id)arg1 tabGroupManager:(id)arg2 preferredProfileIdentifier:(id)arg3 deviceName:(id)arg4;
- (bool)isInDefaultProfile;
- (void)setActiveProfileIdentifier:(id)arg1;
- (void)setActiveTabGroupUUID:(id)arg1;
- (void)setCanSwitchProfiles:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setUnnamedTabGroupDisplayTitleProvider:(id /* block */)arg1;
- (void)tabGroupManager:(id)arg1 didRemoveProfileWithIdentifier:(id)arg2;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroupWithUUID:(id)arg2;
- (id /* block */)unnamedTabGroupDisplayTitleProvider;
- (id)unnamedTabGroupForActiveProfile;
- (void)willClose;

@end
