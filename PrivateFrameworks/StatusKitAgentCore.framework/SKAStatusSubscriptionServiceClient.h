
@interface SKAStatusSubscriptionServiceClient : NSObject <SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate, SKStatusSubscriptionDaemonProtocol> {
    bool  _accountCheckCompleted;
    bool  _accountIsStatusKitCapable;
    SKAStatusSubscriptionServiceClientConnection * _clientConnection;
    <SKADatabaseManaging> * _databaseManager;
    <SKAStatusSubscriptionServiceClientDelegate> * _delegate;
    <SKAStatusEncryptionManaging> * _encryptionManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _statusTypeIdenfifier;
    <SKAStatusSubscriptionManaging> * _subscriptionManager;
    bool  _trafficModeEnabled;
}

@property (nonatomic) bool accountCheckCompleted;
@property (nonatomic) bool accountIsStatusKitCapable;
@property (nonatomic, retain) SKAStatusSubscriptionServiceClientConnection *clientConnection;
@property (nonatomic, retain) <SKADatabaseManaging> *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAStatusSubscriptionServiceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SKAStatusEncryptionManaging> *encryptionManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) NSString *statusTypeIdenfifier;
@property (nonatomic, retain) <SKAStatusSubscriptionManaging> *subscriptionManager;
@property (readonly) Class superclass;
@property (nonatomic) bool trafficModeEnabled;

+ (id)_accountNotCapableError;
+ (id)_genericMissingSubscriptionEntitlmentError;
+ (id)_inTrafficError;
+ (id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)arg1;
+ (id)_subscriptionIdentifierNotFoundError:(id)arg1;
+ (id)logger;

- (void).cxx_destruct;
- (id)_currentStatusForChannel:(id)arg1;
- (id)_handlesAssociatedWithChannel:(id)arg1;
- (id)_subscriptionMetadataForChannel:(id)arg1;
- (bool)_validateChannelIsKnownForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;
- (bool)accountCheckCompleted;
- (bool)accountIsStatusKitCapable;
- (void)accountIsStatusKitCapableWithCompletion:(id /* block */)arg1;
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)allSubscriptionMetadatasForStatusTypeIdentifier:(id)arg1 includingPersonalSubscription:(bool)arg2 completion:(id /* block */)arg3;
- (void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)channelMatchesClientStatusTypeIdentifier:(id)arg1;
- (id)clientConnection;
- (id)databaseManager;
- (id)delegate;
- (void)deleteSubscriptionWithIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)encryptionManager;
- (void)handleReceivedInvitationForChannel:(id)arg1;
- (void)handleReceivedStatusUpdate:(id)arg1 onChannel:(id)arg2;
- (void)handleRemoteDatabaseChangeForChannels:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3 databaseManager:(id)arg4 subscriptionManager:(id)arg5 encryptionManager:(id)arg6 inTrafficMode:(bool)arg7;
- (id)queue;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccountCheckCompleted:(bool)arg1;
- (void)setAccountIsStatusKitCapable:(bool)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setDatabaseManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptionManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSubscriptionManager:(id)arg1;
- (void)setTrafficModeEnabled:(bool)arg1;
- (id)statusTypeIdenfifier;
- (id)subscriptionManager;
- (void)subscriptionMetadataForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)subscriptionServiceClientConnectionWasInterrupted:(id)arg1;
- (void)subscriptionServiceClientConnectionWasInvalidated:(id)arg1;
- (void)subscriptionValidationTokensForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)trafficModeEnabled;
- (long long)validatePersonalChannel:(id)arg1 matchesEncryptionValidationToken:(id)arg2 fromSender:(id)arg3;
- (long long)validatePersonalChannel:(id)arg1 matchesSubscriptionValidationToken:(id)arg2 fromSender:(id)arg3;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)arg1 fromSender:(id)arg2 statusTypeIdentifier:(id)arg3 completion:(id /* block */)arg4;

@end
