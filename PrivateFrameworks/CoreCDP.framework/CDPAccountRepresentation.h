
@interface CDPAccountRepresentation : NSObject {
    AKAccountManager * _accountManager;
    ACAccountStore * _accountStore;
    NSString * _altDSID;
    ACAccount * _appleAccount;
    ACAccount * _authKitAccount;
}

@property (nonatomic, readonly, copy) NSString *DSID;
@property (nonatomic, retain) AKAccountManager *accountManager;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, readonly) ACAccount *appleAccount;
@property (nonatomic, readonly) ACAccount *authKitAccount;
@property (nonatomic, readonly, copy) NSString *authenticationToken;
@property (nonatomic, readonly, copy) NSString *escrowURLString;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) CDPContext *generatedContext;
@property (nonatomic, readonly, copy) NSString *iCloudEnvironment;
@property (nonatomic, readonly) bool isBeneficiary;
@property (nonatomic, readonly) bool isICDPEnabled;
@property (nonatomic, readonly) bool isSilentEscrowRecordRepairEnabled;
@property (nonatomic, readonly) unsigned long long securityLevel;
@property (nonatomic, readonly) bool shouldPerformSilentEscrowRecordRepair;
@property (nonatomic, readonly, copy) NSString *stashedPRK;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)representationForAccount:(id)arg1;
+ (id)representationForAltDSID:(id)arg1;
+ (id)representationForPrimaryAccount;

- (void).cxx_destruct;
- (id)DSID;
- (void)_cachePropertyValue:(id)arg1 forKey:(id)arg2 lastModifiedDate:(id)arg3 account:(id)arg4 saveHandler:(id /* block */)arg5;
- (id)_cachedPropertyValueOfClass:(Class)arg1 forKey:(id)arg2 staleModifiedDate:(id)arg3 account:(id)arg4 isStale:(bool*)arg5;
- (id)_cachedPropertyValueOfClass:(Class)arg1 forKey:(id)arg2 valueProducer:(id /* block */)arg3;
- (id)_cachedPropertyValueOfClass:(Class)arg1 forKey:(id)arg2 valueProducer:(id /* block */)arg3 checkForStale:(bool)arg4 account:(id)arg5;
- (id)_cachedPropertyValueOfClass:(Class)arg1 forKey:(id)arg2 valueProducer:(id /* block */)arg3 checkForStale:(bool)arg4 account:(id)arg5 saveHandler:(id /* block */)arg6;
- (id)_cachedPropertyValueOfClass:(Class)arg1 forKey:(id)arg2 valueProducer:(id /* block */)arg3 saveHandler:(id /* block */)arg4;
- (id)_cachedPropertyValueOfClass:(Class)arg1 forKey:(id)arg2 valueProducer:(id /* block */)arg3 staleModifiedDate:(id)arg4 account:(id)arg5 saveHandler:(id /* block */)arg6;
- (id)_deserializedPropertyDictionaryForData:(id)arg1 withPropertyValueOfClass:(Class)arg2 error:(id*)arg3;
- (id)_serializedPropertyDictionaryWithValue:(id)arg1 lastModifiedDate:(id)arg2 error:(id*)arg3;
- (id)accountManager;
- (id)accountStore;
- (id)altDSID;
- (id)appleAccount;
- (id)authKitAccount;
- (id)authenticationToken;
- (id)escrowURLString;
- (id)firstName;
- (id)fullName;
- (id)generatedContext;
- (id)iCloudEnvironment;
- (id)initWithAccount:(id)arg1;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithAltDSID:(id)arg1 accountStore:(id)arg2 accountManager:(id)arg3;
- (bool)isBeneficiary;
- (bool)isICDPEnabled;
- (bool)isICDPEnabledByCheckingWithServer:(bool)arg1;
- (bool)isSilentEscrowRecordRepairEnabled;
- (unsigned long long)securityLevel;
- (void)setAccountManager:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (bool)shouldPerformSilentEscrowRecordRepair;
- (void)silentEscrowRecordRepairEnabledWithCompletion:(id /* block */)arg1;
- (id)stashedPRK;
- (id)username;

@end
