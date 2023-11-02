
@interface STContentPrivacyListController : STPINListViewController {
    PSSpecifier * _contentRestrictionsSpecifier;
    PSSpecifier * _enableRestrictionsSwitchSpecifier;
}

@property (retain) PSSpecifier *contentRestrictionsSpecifier;
@property (retain) PSSpecifier *enableRestrictionsSwitchSpecifier;
@property (readonly, copy) NSArray *storeDetailSpecifiers;

- (void).cxx_destruct;
- (id)_allowChangesSpecifiers;
- (id)_enableRestrictionsSwitchSpecifier;
- (void)_isLoadedDidChange:(bool)arg1;
- (id)_privacySpecifiers;
- (id)_topLevelExternalSpecifierWithClass:(Class)arg1 name:(id)arg2 idTitle:(id)arg3;
- (id)_topLevelSpecifierWithAction:(SEL)arg1 name:(id)arg2;
- (id)_topLevelSpecifiers;
- (void)_viewProfilesAndDeviceManagement:(id)arg1;
- (id)contentRestrictionsSpecifier;
- (void)dealloc;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)defaultLinkListSpecifierWithItem:(id)arg1;
- (id)defaultRadioItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)enableRestrictionsSwitchSpecifier;
- (id)getItemSpecifierValue:(id)arg1;
- (id)getRestrictionsEnabled:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (void)setContentRestrictionsSpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setEnableRestrictionsSwitchSpecifier:(id)arg1;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (void)setRestrictionsEnabled:(id)arg1 specifier:(id)arg2;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)showAllowedAppsRestrictions:(id)arg1;
- (void)showMediaRestrictions:(id)arg1;
- (void)showiTunesPurchasesRestrictions:(id)arg1;
- (id)specifiers;
- (id)storeDetailSpecifiers;
- (id)tccSpecifierWithCapabilityKey:(id)arg1 id:(id)arg2;

@end
