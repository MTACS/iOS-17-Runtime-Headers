
@protocol CPConversationServerBag <NSObject>

@required

- (unsigned long long)AVCBlobRecoveryGracePeriod;
- (unsigned long long)AVCBlobRecoveryTimeout;
- (unsigned long long)activeParticipantPruningTimeout;
- (unsigned long long)activeParticipantRefreshDelay;
- (unsigned long long)backgroundAppPolicyHandleExpiryDays;
- (NSArray *)blockedActivitySessionBundleIdentifiers;
- (bool)fastSyncRecoveryMessageHandlingEnabled;
- (unsigned long long)maxActiveParticipantFetchRetries;
- (unsigned long long)qrPluginConnectionRetryIntervalMillis;
- (unsigned long long)qrPluginMaxConnectionAttempts;
- (unsigned long long)qrPluginMaxRpcStreamAttempts;
- (unsigned long long)qrPluginRpcStreamRetryIntervalMillis;
- (unsigned long long)rebroadcastTimeThreshold;
- (unsigned long long)sessionCleanupTimeout;
- (NSString *)stableBundleIdentifierForLocalBundleIdentifier:(NSString *)arg1;
- (unsigned long long)timeBetweenMacOSSharePlayNotificationsSeconds;
- (unsigned long long)unreliableMessengerChannelStreamMaxQueueSize;
- (unsigned long long)unreliableMessengerChannelStreamMaxTries;
- (unsigned long long)unreliableMessengerChannelStreamRetryIntervalMillis;
- (unsigned long long)unreliableMessengerEgressMessagePayloadMaxSizeBytes;
- (unsigned long long)unreliableMessengerEstablishChannelMaxAttempts;
- (unsigned long long)unreliableMessengerEstablishChannelRetryIntervalMillis;
- (unsigned long long)unreliableMessengerSeqNumBufferSize;

@end
