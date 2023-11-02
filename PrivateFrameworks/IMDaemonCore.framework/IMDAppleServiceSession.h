
@interface IMDAppleServiceSession : IMDServiceSession {
    NSString * _GUID;
    NSString * _serviceName;
}

@property (nonatomic, readonly, retain) NSString *GUID;
@property (nonatomic, readonly, retain) NSArray *aliases;
@property (nonatomic, readonly, retain) NSString *callerURI;
@property (nonatomic, readonly, retain) IDSAccount *idsAccount;
@property (nonatomic, readonly) NSArray *registeredURIs;
@property (nonatomic, readonly, retain) NSArray *vettedAliases;

+ (id)idsAccounts;

- (id)GUID;
- (id)_aliasStringsForIDSAccount:(id)arg1;
- (id)_aliases;
- (id)_aliasesForIDSAccount:(id)arg1;
- (bool)_isDeviceRegistered;
- (bool)_isDeviceRegisteredForAccount:(id)arg1;
- (void)_updateAccountStatusToUnregistered:(bool)arg1 withAccount:(id)arg2;
- (long long)_validationStatusForAlias:(id)arg1 onAccount:(id)arg2;
- (void)activeDevicesUpdated;
- (void)addAliases:(id)arg1 account:(id)arg2;
- (id)aliases;
- (void)authenticateAccount:(id)arg1;
- (id)callerURI;
- (id)callerURIForIDSAccount:(id)arg1;
- (void)dealloc;
- (id)idsAccount;
- (id)idsAccountForFromURI:(id)arg1 toURI:(id)arg2;
- (id)idsAccountForURI:(id)arg1 IDSServiceName:(id)arg2;
- (id)imdAccountForIDSAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (bool)isiMessageServiceIDSAccount:(id)arg1;
- (void)loginServiceSessionWithAccount:(id)arg1;
- (void)logoutServiceSessionWithAccount:(id)arg1;
- (void)passwordUpdatedWithAccount:(id)arg1;
- (void)reIdentify;
- (void)refreshRegistration;
- (void)registerAccount:(id)arg1;
- (id)registeredURIs;
- (void)removeAliases:(id)arg1 account:(id)arg2;
- (void)reregister;
- (void)resetCallerIDForIDSAccount:(id)arg1;
- (void)sessionDidBecomeActive;
- (void)sessionWillBecomeInactiveWithAccount:(id)arg1;
- (void)tryToRepairCallerID:(id)arg1 forIDSAccount:(id)arg2;
- (void)unregisterAccount:(id)arg1;
- (void)unvalidateAliases:(id)arg1 account:(id)arg2;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3;
- (void)validateAliases:(id)arg1 account:(id)arg2;
- (void)validateProfileWithAccount:(id)arg1;
- (long long)validationStatusForAlias:(id)arg1;
- (long long)validationStatusForAlias:(id)arg1 onAccount:(id)arg2;
- (id)vettedAliases;

@end
