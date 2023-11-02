
@interface ATXNPlusOneStudyEvent : NSObject {
    NSString * _appBundleId;
    ATXNPlusOneStudyAppLaunchCounts * _appLaunchCounts;
    double  _appLaunchPopularity;
    bool  _appPushNotificationEnabled;
    unsigned long long  _appScreenTimeCategory;
    NSString * _extensionBundleId;
    long long  _suggestionCountInfoHeuristicHigh;
    long long  _suggestionCountInfoHeuristicLow;
    long long  _suggestionCountInfoHeuristicMed;
    long long  _suggestionCountRelevantShortcut;
    long long  _suggestionCountShortcutConversionHigh;
    long long  _suggestionCountShortcutConversionLow;
    long long  _suggestionCountShortcutConversionMed;
    bool  _widgetExistsOnScreen;
    NSString * _widgetKind;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) ATXNPlusOneStudyAppLaunchCounts *appLaunchCounts;
@property (nonatomic) double appLaunchPopularity;
@property (nonatomic) bool appPushNotificationEnabled;
@property (nonatomic) unsigned long long appScreenTimeCategory;
@property (nonatomic, retain) NSString *extensionBundleId;
@property (nonatomic) long long suggestionCountInfoHeuristicHigh;
@property (nonatomic) long long suggestionCountInfoHeuristicLow;
@property (nonatomic) long long suggestionCountInfoHeuristicMed;
@property (nonatomic) long long suggestionCountRelevantShortcut;
@property (nonatomic) long long suggestionCountShortcutConversionHigh;
@property (nonatomic) long long suggestionCountShortcutConversionLow;
@property (nonatomic) long long suggestionCountShortcutConversionMed;
@property (nonatomic) bool widgetExistsOnScreen;
@property (nonatomic, retain) NSString *widgetKind;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)appLaunchCounts;
- (double)appLaunchPopularity;
- (bool)appPushNotificationEnabled;
- (unsigned long long)appScreenTimeCategory;
- (id)coreAnalyticsEvent;
- (id)extensionBundleId;
- (void)setAppBundleId:(id)arg1;
- (void)setAppLaunchCounts:(id)arg1;
- (void)setAppLaunchPopularity:(double)arg1;
- (void)setAppPushNotificationEnabled:(bool)arg1;
- (void)setAppScreenTimeCategory:(unsigned long long)arg1;
- (void)setExtensionBundleId:(id)arg1;
- (void)setSuggestionCountInfoHeuristicHigh:(long long)arg1;
- (void)setSuggestionCountInfoHeuristicLow:(long long)arg1;
- (void)setSuggestionCountInfoHeuristicMed:(long long)arg1;
- (void)setSuggestionCountRelevantShortcut:(long long)arg1;
- (void)setSuggestionCountShortcutConversionHigh:(long long)arg1;
- (void)setSuggestionCountShortcutConversionLow:(long long)arg1;
- (void)setSuggestionCountShortcutConversionMed:(long long)arg1;
- (void)setWidgetExistsOnScreen:(bool)arg1;
- (void)setWidgetKind:(id)arg1;
- (long long)suggestionCountInfoHeuristicHigh;
- (long long)suggestionCountInfoHeuristicLow;
- (long long)suggestionCountInfoHeuristicMed;
- (long long)suggestionCountRelevantShortcut;
- (long long)suggestionCountShortcutConversionHigh;
- (long long)suggestionCountShortcutConversionLow;
- (long long)suggestionCountShortcutConversionMed;
- (bool)widgetExistsOnScreen;
- (id)widgetKind;

@end
