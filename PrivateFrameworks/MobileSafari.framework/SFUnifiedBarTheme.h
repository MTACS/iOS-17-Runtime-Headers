
@interface SFUnifiedBarTheme : SFThemeColorBarTheme <SFUnifiedTabBarItemTitleThemeProviding> {
    UIColor * _activeTabAccessoryButtonTintColor;
    UIColor * _activeTabControlsTintColor;
    UIColor * _activeTabFieldTintColor;
    UIColor * _activeTabProgressBarTintColor;
    SFUnifiedTabBarItemTitleContainerViewTheme * _activeTabTitleTheme;
    UIColor * _inputFieldAccessoryButtonTintColor;
    UIColor * _inputFieldSecondaryAccessoryButtonTintColor;
    bool  _isPrivate;
    UIColor * _overridePlatterColor;
    UIColor * _progressBarTintColor;
    UIColor * _selectedMenuButtonTintColor;
    UIColor * _separatorColor;
    UIColor * _tabAccessoryButtonTintColor;
    UIColor * _tabControlsTintColor;
    UIColor * _tabProgressBarTintColor;
    SFUnifiedTabBarItemTitleContainerViewTheme * _tabTitleTheme;
    SFUnifiedTabBarItemTitleContainerViewTheme * _titleTheme;
}

@property (nonatomic, readonly) UIColor *activeTabAccessoryButtonTintColor;
@property (nonatomic, readonly) UIColor *activeTabControlsTintColor;
@property (nonatomic, readonly) UIColor *activeTabFieldTintColor;
@property (nonatomic, readonly) UIColor *activeTabProgressBarTintColor;
@property (nonatomic, readonly) SFUnifiedTabBarItemTitleContainerViewTheme *activeTabTitleTheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *inputFieldAccessoryButtonTintColor;
@property (nonatomic, readonly) UIColor *inputFieldSecondaryAccessoryButtonTintColor;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) UIColor *overridePlatterColor;
@property (nonatomic, readonly) UIColor *progressBarTintColor;
@property (nonatomic, readonly) UIColor *selectedMenuButtonTintColor;
@property (nonatomic, readonly) UIColor *separatorColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *tabAccessoryButtonTintColor;
@property (nonatomic, readonly) UIColor *tabControlsTintColor;
@property (nonatomic, readonly) UIColor *tabProgressBarTintColor;
@property (nonatomic, readonly) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme;
@property (nonatomic, readonly) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme;

+ (id)defaultTheme;

- (void).cxx_destruct;
- (id)activeTabAccessoryButtonTintColor;
- (id)activeTabControlsTintColor;
- (id)activeTabFieldTintColor;
- (id)activeTabProgressBarTintColor;
- (id)activeTabTitleTheme;
- (id)initWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;
- (id)inputFieldAccessoryButtonTintColor;
- (id)inputFieldSecondaryAccessoryButtonTintColor;
- (bool)isPrivate;
- (id)overridePlatterColor;
- (id)progressBarTintColor;
- (id)selectedMenuButtonTintColor;
- (id)separatorColor;
- (id)tabAccessoryButtonTintColor;
- (id)tabControlsTintColor;
- (id)tabProgressBarTintColor;
- (id)tabTitleTheme;
- (id)titleTheme;

@end
