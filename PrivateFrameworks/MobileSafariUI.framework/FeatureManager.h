
@interface FeatureManager : WBUFeatureManager {
    WBSAppleAccountInformationProvider * _accountInformationProvider;
    bool  _addToHomeScreenAvailable;
    bool  _cloudAccountIsHSA2;
    bool  _customTabGroupsEnabled;
    bool  _isCloudSyncEnabled;
}

@property (getter=isAddToHomeScreenAvailable, nonatomic, readonly) bool addToHomeScreenAvailable;
@property (getter=isCustomTabGroupsEnabled, nonatomic, readonly) bool customTabGroupsEnabled;
@property (getter=isFloatingSidebarButtonEnabled, nonatomic, readonly) bool floatingSidebarButtonEnabled;
@property (getter=areSharedTabGroupsEnabled, nonatomic, readonly) bool sharedTabGroupsEnabled;
@property (getter=isTabGroupButtonEnabled, nonatomic, readonly) bool tabGroupButtonEnabled;
@property (getter=areTabGroupSuggestionsEnabled, nonatomic, readonly) bool tabGroupSuggestionsEnabled;

+ (id)sharedFeatureManager;

- (void).cxx_destruct;
- (void)_accountsDidChange;
- (bool)_isSafariSyncEnabled;
- (void)_updateAccessLevel;
- (bool)areSharedTabGroupsEnabled;
- (bool)areTabGroupSuggestionsEnabled;
- (id)init;
- (bool)isAddToHomeScreenAvailable;
- (bool)isCloudAccountHSA2;
- (bool)isCustomTabGroupsEnabled;
- (bool)isFloatingSidebarButtonEnabled;
- (bool)isTabGroupButtonEnabled;

@end
