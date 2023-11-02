
@interface _SFBrowserConfiguration : NSObject {
    long long  _configuration;
    <UITraitEnvironment> * _traitEnvironment;
}

@property (nonatomic, readonly) bool allowsClosingLastTab;
@property (nonatomic, readonly) bool allowsKeyboardCorrectionLearning;
@property (nonatomic, readonly) bool allowsNetworkedSearchSuggestions;
@property (nonatomic, readonly) bool allowsPersistingTabState;
@property (nonatomic, readonly) bool allowsReopeningClosedTabs;
@property (nonatomic, readonly) bool allowsRestoringEducationTabs;
@property (nonatomic, readonly) bool allowsSearchFeedback;
@property (nonatomic, readonly) bool allowsSiteSpecificSearch;
@property (nonatomic, readonly) bool allowsSpeculativeLoading;
@property (nonatomic, readonly) bool allowsStreamlinedLogin;
@property (nonatomic, readonly) bool allowsUserActivityFeedback;
@property (nonatomic, readonly) long long barTintStyle;
@property (getter=isControlledByAutomation, nonatomic, readonly) bool controlledByAutomation;
@property (getter=isPrivateBrowsingEnabled, nonatomic, readonly) bool privateBrowsingEnabled;
@property (nonatomic, readonly) <UITraitEnvironment> *traitEnvironment;
@property (nonatomic, readonly) bool usesDarkTheme;
@property (nonatomic, readonly) bool usesPersistentDataStore;

- (void).cxx_destruct;
- (bool)allowsClosingLastTab;
- (bool)allowsKeyboardCorrectionLearning;
- (bool)allowsNetworkedSearchSuggestions;
- (bool)allowsPersistingTabState;
- (bool)allowsReopeningClosedTabs;
- (bool)allowsRestoringEducationTabs;
- (bool)allowsSearchFeedback;
- (bool)allowsSiteSpecificSearch;
- (bool)allowsSpeculativeLoading;
- (bool)allowsStreamlinedLogin;
- (bool)allowsUserActivityFeedback;
- (long long)barTintStyle;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPrivateBrowsingEnabled:(bool)arg1 traitEnvironment:(id)arg2 controlledByAutomation:(bool)arg3;
- (bool)isControlledByAutomation;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateBrowsingEnabled;
- (id)traitEnvironment;
- (bool)usesDarkTheme;
- (bool)usesPersistentDataStore;

@end
