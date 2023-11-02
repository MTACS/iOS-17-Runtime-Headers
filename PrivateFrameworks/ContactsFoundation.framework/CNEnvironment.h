
@interface CNEnvironment : CNEnvironmentBase {
    <CNAuthorizationContext> * _authorizationContext;
    NSString * _defaultCountryCode;
    <CNEntitlementVerification> * _entitlementVerifier;
    <CNFileManager> * _fileManager;
    NSNumber * _isCommLimitsEnabledStorage;
    NSNumber * _isInternalBuildStorage;
    NSNumber * _isKeychainEnabledStorage;
    <CNLocalizationServices> * _localizationServices;
    NSString * _mainBundleIdentifier;
    NSNotificationCenter * _notificationCenter;
    <CNProbabilityUtility> * _probabilityUtility;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNTimeProvider> * _timeProvider;
    CNUserDefaults * _userDefaults;
}

@property (readonly) <CNAuthorizationContext> *authorizationContext;
@property (readonly) <CNACDPeopleSuggesterFacade> *cdPeopleSuggester;
@property (getter=isCommLimitsEnabled, readonly) bool commLimitsEnabled;
@property (readonly) CRRecentContactsLibrary *coreRecentsLibrary;
@property (readonly) DADConnection *dataAccessConnection;
@property (readonly) NSString *defaultCountryCode;
@property (readonly) <CNEntitlementVerification> *entitlementVerifier;
@property (readonly) <CNFileManager> *fileManager;
@property (getter=isInternalBuild, readonly) bool internalBuild;
@property (readonly) <CNKeyboardStateMonitor> *keyboardStateMonitor;
@property (getter=isKeychainEnabled, readonly) bool keychainEnabled;
@property (nonatomic, readonly) <_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> *keychainFacade;
@property (readonly) <CNLocalizationServices> *localizationServices;
@property (readonly) NSString *mainBundleIdentifier;
@property (readonly) <CNMetricsReporter> *metricsReporter;
@property (readonly) <CNNicknameProvider> *nicknameProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) <CNAPeopleSuggesterFacade> *peopleSuggester;
@property (readonly) <CNProbabilityUtility> *probabilityUtility;
@property (readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) <CNACTStewieFacade> *stewie;
@property (readonly) <CNAutocompleteSuggestedResultPrioritization> *suggestedResultPrioritization;
@property (readonly) <CNTimeProvider> *timeProvider;
@property (readonly) CNUserDefaults *userDefaults;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)defaultEnvironment;
+ (char *)environmentStackKey;

- (void).cxx_destruct;
- (id)authorizationContext;
- (id)defaultCountryCode;
- (id)entitlementVerifier;
- (id)fileManager;
- (id)getDefaultCountryCode;
- (id)init;
- (bool)isCommLimitsEnabled;
- (bool)isCommLimitsEnabledImpl;
- (bool)isInternalBuild;
- (bool)isKeychainEnabled;
- (bool)isKeychainEnabledImpl;
- (id)keychainFacade;
- (id)localizationServices;
- (id)mainBundleIdentifier;
- (id)notificationCenter;
- (id)probabilityUtility;
- (id)schedulerProvider;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)timeProvider;
- (id)userDefaults;
- (id)valueForKey:(id)arg1 onCacheMiss:(id /* block */)arg2;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (id)keyboardStateMonitor;
- (id)nicknameProvider;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (id)cdPeopleSuggester;
- (id)dataAccessConnection;
- (id)peopleSuggester;
- (id)stewie;
- (id)suggestedResultPrioritization;

// Image: /System/Library/PrivateFrameworks/ContactsMetrics.framework/ContactsMetrics

- (id)metricsReporter;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)coreRecentsLibrary;

@end
