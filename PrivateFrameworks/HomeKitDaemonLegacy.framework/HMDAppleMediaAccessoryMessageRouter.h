
@interface HMDAppleMediaAccessoryMessageRouter : HMFObject <HMDMessageRouter, HMFLogging> {
    <HMDAppleMediaAccessoryMessageRouterDataSource> * _dataSource;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
}

@property <HMDAppleMediaAccessoryMessageRouterDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceDeviceForMessage:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (void)relayMessage:(id)arg1 device:(id)arg2 allowRemoteRelayFromPrimary:(bool)arg3;
- (void)routeMessage:(id)arg1 allowRemoteRelayFromPrimary:(bool)arg2 localHandler:(id /* block */)arg3;
- (void)routeMessage:(id)arg1 localHandler:(id /* block */)arg2;
- (void)setDataSource:(id)arg1;

@end
