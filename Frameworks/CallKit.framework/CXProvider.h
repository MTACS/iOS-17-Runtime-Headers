
@interface CXProvider : NSObject <CXActionDelegateInternal> {
    CXAbstractProvider * _abstractProvider;
    NSObject<OS_dispatch_queue> * _completionQueue;
    CXProviderConfiguration * _configuration;
    <CXAbstractProviderDelegate><CXProviderDelegate> * _delegate;
    CXFeatures * _featureFlags;
}

@property (nonatomic, readonly) CXAbstractProvider *abstractProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) CXProviderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXAbstractProviderDelegate><CXProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CXFeatures *featureFlags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *pendingTransactions;
@property (nonatomic, readonly) <CXProviderDelegatePrivate> *privateDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)reportNewIncomingVoIPPushPayload:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)abstractProvider;
- (id)callProviderHostDelegate;
- (oneway void)commitTransaction:(id)arg1;
- (id)completionQueue;
- (id)configuration;
- (id)delegate;
- (id)featureFlags;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (void)handleMuteStatusChangedNotification:(id)arg1;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;
- (id)pendingTransactions;
- (void)performAction:(id)arg1;
- (void)performCompletionBlock:(id /* block */)arg1;
- (id)privateDelegate;
- (id)queue;
- (void)registerCurrentConfiguration;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(id /* block */)arg3;
- (void)reportNewOutgoingCallWithUUID:(id)arg1 update:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (bool)requiresProxyingAVAudioSessionState;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
