
@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool automaticallyAddsNewApplications;
@property (nonatomic) bool enableModalWidgetDiscoverabilityForTesting;
@property (nonatomic, copy) NSArray *focusModesRequiringIntroduction;
@property (nonatomic, copy) NSString *leftOfHomeAppBundleIdentifier;
@property (nonatomic, copy) NSString *overriddenScreenType;
@property (nonatomic) bool pagesHaveEverBeenHidden;
@property (nonatomic) bool shouldAddDefaultWidgetsToHomeScreen;
@property (nonatomic) bool shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic) bool shouldHideReportWidgetStackRotationQuickAction;
@property (nonatomic) bool shouldIgnoreMinimumRequiredSDKVersionForWidgets;
@property (nonatomic) bool shouldPrepareDefaultTodayList;
@property (nonatomic) bool shouldPrepareStackForDefaultTodayList;
@property (nonatomic) bool shouldShowLibraryEducationView;
@property (nonatomic) bool shouldShowWidgetIntroductionPopover;
@property (nonatomic) bool shouldUpgradeEnableWidgetSuggestions;
@property (nonatomic) bool shouldUseLargeIcons;
@property (nonatomic) bool showsBadgesInAppLibrary;
@property (nonatomic) bool showsHomeScreenSearchAffordance;
@property (getter=isSidebarPinned, nonatomic) bool sidebarPinned;
@property (nonatomic) bool userDidUndoSuggestedWidget;
@property (nonatomic) bool userHasDeletedSuggestedWidget;

- (void)_bindAndRegisterDefaults;
- (bool)automaticallyAddsNewApplicationsExists;

@end
