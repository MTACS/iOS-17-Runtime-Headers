
@interface CNContactsEnvironment : NSObject <NSCopying> {
    CNiOSABPredicateRunner * _abPredicateRunner;
    CNiOSAddressBook * _addressBook;
    NSURL * _baseURL;
    NSArray * _delegateInfos;
    <CNContactsLoggerProvider> * _loggerProvider;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNSiriIntelligenceSettingsProtocol> * _siriIntelligenceSettings;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsService;
}

@property (nonatomic, retain) CNiOSABPredicateRunner *abPredicateRunner;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, retain) NSArray *delegateInfos;
@property (nonatomic, readonly) <CNContactsLoggerProvider> *loggerProvider;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, retain) <CNSiriIntelligenceSettingsProtocol> *siriIntelligenceSettings;
@property (nonatomic, retain) <SGSuggestionsServiceContactsProtocol> *suggestionsService;
@property (nonatomic, readonly) bool useInMemoryStores;

+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)currentEnvironment;
+ (id)inMemoryURL;
+ (bool)supportsSecureCoding;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)abPredicateRunner;
- (id)addressBook;
- (id)baseURL;
- (id)copyWithDelegateInfos:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (id)loggerProvider;
- (void)makeCurrentEnvironment;
- (id)schedulerProvider;
- (void)setAbPredicateRunner:(id)arg1;
- (void)setAddressBook:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDelegateInfos:(id)arg1;
- (void)setSiriIntelligenceSettings:(id)arg1;
- (void)setSuggestionsService:(id)arg1;
- (id)siriIntelligenceSettings;
- (id)suggestionsService;
- (bool)useInMemoryStores;

@end
