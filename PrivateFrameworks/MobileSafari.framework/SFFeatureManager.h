
@interface SFFeatureManager : WBUFeatureManager {
    bool  _addToHomeScreenAvailable;
    bool  _tabDocumentCanHideToolbar;
}

@property (getter=isAddToHomeScreenAvailable, nonatomic, readonly) bool addToHomeScreenAvailable;
@property (nonatomic, readonly) long long preferredCapsuleLayoutStyle;
@property (getter=isSearchHelperEnabled, nonatomic, readonly) bool searchHelperEnabled;
@property (nonatomic, readonly) bool showRectangularTabsInSeparateBar;
@property (nonatomic) bool tabDocumentCanHideToolbar;
@property (nonatomic, readonly) bool usesFormatMenuInUnifiedTabBar;

+ (id)sharedFeatureManager;
+ (bool)supportsWebpageStatusBar;

- (void)_updateAccessLevel;
- (id)init;
- (bool)isAddToHomeScreenAvailable;
- (bool)isSearchHelperEnabled;
- (long long)preferredCapsuleLayoutStyle;
- (void)setTabDocumentCanHideToolbar:(bool)arg1;
- (bool)showRectangularTabsInSeparateBar;
- (bool)tabDocumentCanHideToolbar;
- (bool)usesFormatMenuInUnifiedTabBar;

@end
