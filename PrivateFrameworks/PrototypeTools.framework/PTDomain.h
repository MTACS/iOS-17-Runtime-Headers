
@interface PTDomain : NSObject <PTDomainClient> {
    PTTestRecipe * _activeTestRecipe;
    bool  _archiveIsApplied;
    double  _delayBeforeRegisteringAfterInterruption;
    NSString * _domainID;
    PTDomainInfo * _domainInfo;
    bool  _haveSentProxyDefinition;
    bool  _registrationCompleted;
    bool  _registrationRequested;
    PTSettings * _rootSettings;
    NSXPCConnection * _serverConnection;
    NSMutableDictionary * _testRecipesByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedInstance;
+ (id)domainGroupName;
+ (id)domainName;
+ (void)registerTestRecipe:(id)arg1;
+ (id)rootSettings;
+ (Class)rootSettingsClass;

- (void).cxx_destruct;
- (void)_applyArchive:(id)arg1;
- (void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_createConnection;
- (void)_disableObservationIfNecessary;
- (id)_domainID;
- (id)_domainInfo;
- (void)_handleConnectionInterrupted;
- (void)_handleConnectionInvalidated;
- (id)_init;
- (void)_noteRegistrationCompleted;
- (void)_registerTestRecipe:(id)arg1;
- (void)_registerWithServerIfNecessary;
- (void)_restoreDefaultSettings;
- (id)_rootSettings;
- (void)_sendProxyDefinitionIfNecessary;
- (void)_tearDownConnection;
- (void)_updateActiveTestRecipe;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)dealloc;
- (void)invokeOutletAtKeyPath:(id)arg1;
- (void)restoreDefaultSettings;
- (void)sendActiveTestRecipeEvent:(long long)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)updateSettingsFromArchive:(id)arg1;

@end
