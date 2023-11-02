
@interface HMDRapportMessageTransport : HMDRemoteMessageTransport <HMDRapportMessagingReachabilityDelegate> {
    HMDAppleAccountManager * _appleAccountManager;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    HMDRapportMessaging * _rapportMessaging;
}

@property (nonatomic, readonly) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, readonly) HMDRapportMessaging *rapportMessaging;

+ (id)logCategory;
+ (unsigned long long)restriction;

- (void).cxx_destruct;
- (id)_IDSIdentifierForDestination:(id)arg1;
- (void)_addSourceDeviceIdentifierToPayload:(id)arg1 withRemoteMessage:(id)arg2;
- (void)_configureRapport;
- (id)_deviceForIDSIdentifier:(id)arg1 deviceIdentifier:(id)arg2;
- (void)_didReceiveRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)_rpOptions:(id)arg1 stringForKey:(id)arg2;
- (void)_sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serializeRemoteMessage:(id)arg1 withResponseErrorData:(id)arg2 serializationError:(id*)arg3;
- (void)_setSharedUserIDSIdentifierForDevice:(id)arg1 idsIdentifier:(id)arg2;
- (id)appleAccountManager;
- (bool)canSendMessage:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1 rapportMessaging:(id)arg2 logEventSubmitter:(id)arg3 appleAccountManager:(id)arg4;
- (bool)isSecure;
- (bool)isValidMessage:(id)arg1;
- (id)logEventSubmitter;
- (id)rapportMessaging;
- (void)rapportMessaging:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(bool)arg3;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)start;
- (int)transportType;

@end
