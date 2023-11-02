
@interface HMDHouseholdMetricsMessagingProvider : NSObject <HMDHouseholdMetricsMessaging> {
    HMDMessageDispatcher * _messageDispatcher;
    <HMFMessageReceiver> * _receiver;
}

@property (nonatomic, readonly) HMDMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) <HMFMessageReceiver> *receiver;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)deregisterForMessage:(id)arg1;
- (id)initWithReceiver:(id)arg1;
- (id)initWithReceiver:(id)arg1 messageDispatcher:(id)arg2;
- (id)messageDispatcher;
- (id)receiver;
- (void)registerForMessage:(id)arg1 messageHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withPayload:(id)arg3 responseHandler:(id /* block */)arg4;

@end
