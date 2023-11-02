
@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient> {
    NSMutableSet * _activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    unsigned long long  _capabilities;
    NSObject<OS_dispatch_source> * _cloudServerLaunchTimeoutTimer;
    int  _cloudServerLaunchedNotifyToken;
    NSXPCConnection * _cloudServiceStatusMonitorConnection;
    NSError * _cloudServiceStatusMonitorConnectionEstablishmentError;
    MSVDefaultDictionary * _developerTokenCompletionHandlers;
    bool  _hasValidCapabilities;
    ICCloudServerListenerEndpointProvider * _listenerEndpointProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _observationToken;
    unsigned long long  _observingCloudServiceStatusRequestsCount;
    long long  _privacyAcknowledgementPolicy;
    NSString * _storefrontCountryCode;
    NSString * _storefrontIdentifier;
    MSVDefaultDictionary * _tokensCompletionHandlers;
    NSString * _transactionIdentifierForActiveObservationToken;
    MSVDefaultDictionary * _userTokenCompletionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isObservingCloudServiceStatus, readonly) bool observingCloudServiceStatus;
@property long long privacyAcknowledgementPolicy;
@property (readonly) Class superclass;

+ (bool)_hasEntitlementForStatusAccessExemptedFromUserConsentRequirement;

- (void).cxx_destruct;
- (void)_beginObservingCloudServiceStatus;
- (void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1;
- (void)_cancelCloudServerLaunchedNotifyToken;
- (id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)arg1 error:(id*)arg2;
- (void)_cloudServiceStatusMonitorConnectionWasInterrupted;
- (void)_cloudServiceStatusMonitorConnectionWasInvalidated;
- (void)_didBeginObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_didEndObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_didEndRequestingTokenWithTransactionIdentifier:(id)arg1;
- (void)_endObservingCloudServiceStatusWithToken:(id)arg1;
- (void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1;
- (void)_invalidateCloudServerLaunchTimeoutTimer;
- (void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
- (bool)_locked_isObservingCloudServiceStatus;
- (void)_performCloudServiceStatusMonitorRequestWithDescription:(id)arg1 requestHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_recoverObservingCloudServiceStatus;
- (void)_refreshCloudServiceStatus;
- (void)_registerCloudServerLaunchedNotifyToken;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)arg1 requestCapabilitiesWithCompletionHandler:(id /* block */)arg2;
- (void)_requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)arg1;
- (void)_requestStorefrontIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(bool)arg1;
- (void)_scheduleCloudServerLaunchTimeoutTimer;
- (void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
- (void)_updateWithCapabilities:(unsigned long long)arg1 hasValidCapabilities:(bool)arg2 transactionIdentifier:(id)arg3;
- (void)_updateWithStorefrontCountryCode:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_updateWithStorefrontIdentifier:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_validateAuthorizationExpiryWithCompletionHandler:(id /* block */)arg1;
- (void)activeAccountDidChange;
- (long long)authorizationStatusForScopes:(long long)arg1;
- (void)beginObservingCloudServiceStatus;
- (void)capabilitiesDidChange:(unsigned long long)arg1;
- (void)dealloc;
- (void)endObservingCloudServiceStatus;
- (id)init;
- (bool)isObservingCloudServiceStatus;
- (long long)privacyAcknowledgementPolicy;
- (void)requestAuthorizationForScopes:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)arg1;
- (void)requestDeveloperTokenWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestMusicKitTokensWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)arg1;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestUserTokenForDeveloperToken:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)revokeMusicKitUserTokensForAccountDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setPrivacyAcknowledgementPolicy:(long long)arg1;
- (void)storefrontCountryCodeDidChange:(id)arg1;
- (void)storefrontIdentifierDidChange:(id)arg1;

@end
