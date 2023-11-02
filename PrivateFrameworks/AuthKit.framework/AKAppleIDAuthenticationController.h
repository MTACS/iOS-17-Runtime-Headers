
@interface AKAppleIDAuthenticationController : NSObject <AKAuthenticationController> {
    NSXPCConnection * _authenticationServiceConnection;
    NSLock * _connectionLock;
    AKAppleIDAuthenticationContextManager * _contextManager;
    NSXPCListenerEndpoint * _daemonXPCEndpoint;
    id /* block */  _deallocHandler;
    NSString * _serviceID;
}

@property (nonatomic, copy) id /* block */ deallocHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAppleIDAuthenticationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)sensitiveAuthenticationKeys;
+ (id)sensitiveTokenKeys;
+ (id)tokenDictionaryKeys;

- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (id)_serverFriendlyUsername:(id)arg1;
- (id)_urlBagFromCache:(bool)arg1 altDSID:(id)arg2 withError:(id*)arg3;
- (id)accountNamesForAltDSID:(id)arg1;
- (id)activeLoginCode:(id*)arg1;
- (void)authenticateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)clearSessionCacheWithCompletion:(id /* block */)arg1;
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id /* block */)deallocHandler;
- (id)delegate;
- (bool)deleteAuthorizationDatabaseWithAltDSID:(id)arg1 error:(id*)arg2;
- (void)deleteDeviceListCacheWithCompletion:(id /* block */)arg1;
- (void)deleteDeviceListCacheWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceListWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)deviceListWithContext:(id)arg1 error:(id*)arg2;
- (void)endProximityAuthenticationForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAuthModeWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id*)arg2;
- (void)fetchDeviceListWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchGlobalConfigurationUsingPolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(id /* block */)arg3;
- (void)generateLoginCodeWithCompletion:(id /* block */)arg1;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)getUserInformationForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)getUserInformationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (void)isCreateAppleIDAllowedWithCompletion:(id /* block */)arg1;
- (bool)isDevicePasscodeProtected:(id*)arg1;
- (oneway void)performCheckInForAccountWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)performCircleRequestWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performPasswordResetWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performSilentTTRFor:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(id /* block */)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(id /* block */)arg3;
- (bool)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id*)arg2;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(bool)arg2 forService:(long long)arg3;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(bool)arg2 forService:(long long)arg3;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(id /* block */)arg4;
- (void)setDeallocHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)synchronizeFollowUpItemsForContext:(id)arg1 error:(id*)arg2;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(id /* block */)arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(id /* block */)arg3;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)warmUpVerificationSessionWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)_authContextForAccount:(id)arg1 forceInteraction:(bool)arg2 presentingViewController:(id)arg3;
- (id)_authContextForAccount:(id)arg1 forceInteraction:(bool)arg2 verifyCredentialReason:(long long)arg3 presentingViewController:(id)arg4;
- (void)aaui_authenticateAccount:(id)arg1 forceInteraction:(bool)arg2 presentingViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)aaui_beneficiaryAuthForAccount:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)aaui_beneficiaryViewAccessKeyForAccount:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)aaui_custodianAuthForAccount:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;

@end
