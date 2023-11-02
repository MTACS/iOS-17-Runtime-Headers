
@interface FAFamilySettingsMemberSpecifierProvider : NSObject {
    PSSpecifier * _addFamilyMemberCell;
    NSDictionary * _cachedResourceDictionary;
    <FAFamilySettingsMemberSpecifierProviderDelegeate> * _delegate;
    FAFamilyCircle * _familyCircle;
    FAProfilePictureStore * _familyPictureStore;
    <FAFamilyMemberCardTapHandler> * _memberCardTapHandler;
    unsigned long long  _specifierState;
    NSArray * _specifiers;
}

@property (nonatomic) <FAFamilySettingsMemberSpecifierProviderDelegeate> *delegate;
@property (nonatomic) <FAFamilyMemberCardTapHandler> *memberCardTapHandler;
@property (nonatomic, copy) NSArray *specifiers;

- (void).cxx_destruct;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (void)_delayedLoadIfNeeded;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (bool)_launchWithResourceDictionary:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (id)_specifierWithID:(id)arg1;
- (id)delegate;
- (bool)handleURL:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 familyCircle:(id)arg2 familyPictureStore:(id)arg3;
- (id)memberCardTapHandler;
- (void)reloadSpecifiers;
- (void)setDelegate:(id)arg1;
- (void)setFamilyCircle:(id)arg1;
- (void)setMemberCardTapHandler:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
