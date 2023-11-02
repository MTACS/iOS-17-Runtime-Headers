
@interface CPSharedConversationServerBag : NSObject <CPConversationServerBag>

@property (nonatomic, readonly) unsigned long long AVCBlobRecoveryGracePeriod;
@property (nonatomic, readonly) unsigned long long AVCBlobRecoveryTimeout;
@property (nonatomic, readonly) unsigned long long activeParticipantPruningTimeout;
@property (nonatomic, readonly) unsigned long long activeParticipantRefreshDelay;
@property (nonatomic, readonly) unsigned long long backgroundAppPolicyHandleExpiryDays;
@property (nonatomic, readonly) NSArray *blockedActivitySessionBundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fastSyncRecoveryMessageHandlingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxActiveParticipantFetchRetries;
@property (nonatomic, readonly) unsigned long long qrPluginConnectionRetryIntervalMillis;
@property (nonatomic, readonly) unsigned long long qrPluginMaxConnectionAttempts;
@property (nonatomic, readonly) unsigned long long qrPluginMaxRpcStreamAttempts;
@property (nonatomic, readonly) unsigned long long qrPluginRpcStreamRetryIntervalMillis;
@property (nonatomic, readonly) unsigned long long rebroadcastTimeThreshold;
@property (nonatomic, readonly) unsigned long long sessionCleanupTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timeBetweenMacOSSharePlayNotificationsSeconds;
@property (nonatomic, readonly) unsigned long long unreliableMessengerChannelStreamMaxQueueSize;
@property (nonatomic, readonly) unsigned long long unreliableMessengerChannelStreamMaxTries;
@property (nonatomic, readonly) unsigned long long unreliableMessengerChannelStreamRetryIntervalMillis;
@property (nonatomic, readonly) unsigned long long unreliableMessengerEgressMessagePayloadMaxSizeBytes;
@property (nonatomic, readonly) unsigned long long unreliableMessengerEstablishChannelMaxAttempts;
@property (nonatomic, readonly) unsigned long long unreliableMessengerEstablishChannelRetryIntervalMillis;
@property (nonatomic, readonly) unsigned long long unreliableMessengerSeqNumBufferSize;

- (unsigned long long)AVCBlobRecoveryGracePeriod;
- (unsigned long long)AVCBlobRecoveryTimeout;
- (unsigned long long)activeParticipantPruningTimeout;
- (unsigned long long)activeParticipantRefreshDelay;
- (unsigned long long)backgroundAppPolicyHandleExpiryDays;
- (id)blockedActivitySessionBundleIdentifiers;
- (bool)fastSyncRecoveryMessageHandlingEnabled;
- (unsigned long long)maxActiveParticipantFetchRetries;
- (unsigned long long)qrPluginConnectionRetryIntervalMillis;
- (unsigned long long)qrPluginMaxConnectionAttempts;
- (unsigned long long)qrPluginMaxRpcStreamAttempts;
- (unsigned long long)qrPluginRpcStreamRetryIntervalMillis;
- (unsigned long long)rebroadcastTimeThreshold;
- (unsigned long long)sessionCleanupTimeout;
- (id)stableBundleIdentifierForLocalBundleIdentifier:(id)arg1;
- (unsigned long long)timeBetweenMacOSSharePlayNotificationsSeconds;
- (unsigned long long)unreliableMessengerChannelStreamMaxQueueSize;
- (unsigned long long)unreliableMessengerChannelStreamMaxTries;
- (unsigned long long)unreliableMessengerChannelStreamRetryIntervalMillis;
- (unsigned long long)unreliableMessengerEgressMessagePayloadMaxSizeBytes;
- (unsigned long long)unreliableMessengerEstablishChannelMaxAttempts;
- (unsigned long long)unreliableMessengerEstablishChannelRetryIntervalMillis;
- (unsigned long long)unreliableMessengerSeqNumBufferSize;

@end
