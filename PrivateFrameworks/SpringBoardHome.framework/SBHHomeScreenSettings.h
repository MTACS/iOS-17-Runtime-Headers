
@interface SBHHomeScreenSettings : PTSettings {
    SBHAppLibrarySettings * _appLibrarySettings;
    SBHHomePullToSearchSettings * _coversheetPullToSearchSettings;
    SBHFolderSettings * _folderSettings;
    SBHHomePullToSearchSettings * _homeScreenPullToSearchSettings;
    SBHIconAnimationRootSettings * _iconAnimationSettings;
    SBHIconEditingSettings * _iconEditingSettings;
    SBHIconSettings * _iconSettings;
    SBHHomePullToSearchSettings * _libraryPullToSearchSettings;
    SBHRootFolderSettings * _rootFolderSettings;
    bool  _showPopOvers;
    SBHHomePullToSearchSettings * _todayViewPullToSearchSettings;
    bool  _usesMinimumViableHomeScreen;
    SBHWidgetIntroductionSettings * _widgetIntroductionSettings;
    SBHWidgetSettings * _widgetSettings;
}

@property (nonatomic, retain) SBHAppLibrarySettings *appLibrarySettings;
@property (nonatomic, retain) SBHHomePullToSearchSettings *coversheetPullToSearchSettings;
@property (nonatomic, retain) SBHFolderSettings *folderSettings;
@property (nonatomic, retain) SBHHomePullToSearchSettings *homeScreenPullToSearchSettings;
@property (nonatomic, retain) SBHIconAnimationRootSettings *iconAnimationSettings;
@property (nonatomic, retain) SBHIconEditingSettings *iconEditingSettings;
@property (nonatomic, retain) SBHIconSettings *iconSettings;
@property (nonatomic, retain) SBHHomePullToSearchSettings *libraryPullToSearchSettings;
@property (nonatomic, retain) SBHRootFolderSettings *rootFolderSettings;
@property (nonatomic) bool showPopOvers;
@property (nonatomic, retain) SBHHomePullToSearchSettings *todayViewPullToSearchSettings;
@property (nonatomic) bool usesMinimumViableHomeScreen;
@property (nonatomic, retain) SBHWidgetIntroductionSettings *widgetIntroductionSettings;
@property (nonatomic, retain) SBHWidgetSettings *widgetSettings;

+ (id)homeScreenDefaults;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)appLibrarySettings;
- (id)coversheetPullToSearchSettings;
- (id)folderSettings;
- (id)homeScreenPullToSearchSettings;
- (id)iconAnimationSettings;
- (id)iconEditingSettings;
- (id)iconSettings;
- (id)libraryPullToSearchSettings;
- (id)rootFolderSettings;
- (void)setAppLibrarySettings:(id)arg1;
- (void)setCoversheetPullToSearchSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFolderSettings:(id)arg1;
- (void)setHomeScreenPullToSearchSettings:(id)arg1;
- (void)setIconAnimationSettings:(id)arg1;
- (void)setIconEditingSettings:(id)arg1;
- (void)setIconSettings:(id)arg1;
- (void)setLibraryPullToSearchSettings:(id)arg1;
- (void)setRootFolderSettings:(id)arg1;
- (void)setShowPopOvers:(bool)arg1;
- (void)setTodayViewPullToSearchSettings:(id)arg1;
- (void)setUsesMinimumViableHomeScreen:(bool)arg1;
- (void)setWidgetIntroductionSettings:(id)arg1;
- (void)setWidgetSettings:(id)arg1;
- (bool)showPopOvers;
- (id)todayViewPullToSearchSettings;
- (bool)usesMinimumViableHomeScreen;
- (id)widgetIntroductionSettings;
- (id)widgetSettings;

@end
