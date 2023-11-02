
@interface CNEnvironmentTestDouble : CNEnvironment

@property (retain) <CNAuthorizationContext> *authorizationContext;
@property (retain) <CNACDPeopleSuggesterFacade> *cdPeopleSuggester;
@property (getter=isCommLimitsEnabled) bool commLimitsEnabled;
@property (retain) CRRecentContactsLibrary *coreRecentsLibrary;
@property (retain) DADConnection *dataAccessConnection;
@property (copy) NSString *defaultCountryCode;
@property (retain) <CNEntitlementVerification> *entitlementVerifier;
@property (retain) <CNFileManager> *fileManager;
@property (getter=isInternalBuild) bool internalBuild;
@property (retain) <CNKeyboardStateMonitor> *keyboardStateMonitor;
@property (getter=isKeychainEnabled) bool keychainEnabled;
@property (nonatomic, retain) <_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> *keychainFacade;
@property (retain) <CNLocalizationServices> *localizationServices;
@property (copy) NSString *mainBundleIdentifier;
@property (retain) <CNMetricsReporter> *metricsReporter;
@property (retain) <CNNicknameProvider> *nicknameProvider;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) <CNAPeopleSuggesterFacade> *peopleSuggester;
@property (retain) <CNProbabilityUtility> *probabilityUtility;
@property (retain) <CNSchedulerProvider> *schedulerProvider;
@property (retain) <CNACTStewieFacade> *stewie;
@property (retain) <CNAutocompleteSuggestedResultPrioritization> *suggestedResultPrioritization;
@property (retain) <CNTimeProvider> *timeProvider;
@property (retain) CNUserDefaults *userDefaults;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (id)init;
- (id)keychainFacade;
- (void)setAuthorizationContext:(id)arg1;
- (void)setCommLimitsEnabled:(bool)arg1;
- (void)setDefaultCountryCode:(id)arg1;
- (void)setEntitlementVerifier:(id)arg1;
- (void)setFileManager:(id)arg1;
- (void)setInternalBuild:(bool)arg1;
- (void)setKeychainEnabled:(bool)arg1;
- (void)setKeychainFacade:(id)arg1;
- (void)setLocalizationServices:(id)arg1;
- (void)setMainBundleIdentifier:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setProbabilityUtility:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setTimeProvider:(id)arg1;
- (void)setUserDefaults:(id)arg1;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void)setKeyboardStateMonitor:(id)arg1;
- (void)setNicknameProvider:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (void)setCdPeopleSuggester:(id)arg1;
- (void)setDataAccessConnection:(id)arg1;
- (void)setPeopleSuggester:(id)arg1;
- (void)setStewie:(id)arg1;
- (void)setSuggestedResultPrioritization:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsMetrics.framework/ContactsMetrics

- (void)setMetricsReporter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (void)setCoreRecentsLibrary:(id)arg1;

@end
