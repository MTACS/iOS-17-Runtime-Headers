
@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding> {
    <SKAMessagingProvidingDelegate> * _delegate;
    <SKAPushManaging> * _pushManager;
    NSMutableDictionary * _registeredIDSDeviceChangedObservers;
    IDSService * _service;
    NSString * _serviceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAMessagingProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *idsDevices;
@property (nonatomic, retain) <SKAPushManaging> *pushManager;
@property (nonatomic, retain) NSMutableDictionary *registeredIDSDeviceChangedObservers;
@property (nonatomic, retain) IDSService *service;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (readonly) Class superclass;

+ (id)_noValidIDSDetintationError;
+ (id)logger;

- (void).cxx_destruct;
- (bool)_keysharingIsDisabledByServer;
- (bool)_selfSharingIsDisabledByServer;
- (id)delegate;
- (id)deviceToken;
- (id)deviceTokenForTokenURI:(id)arg1;
- (id)handleForTokenURI:(id)arg1;
- (id)idsDevices;
- (id)initWithDelegate:(id)arg1 serviceIdentifier:(id)arg2 pushManager:(id)arg3 queue:(id)arg4;
- (bool)isFromIDFromSelfAccount:(id)arg1;
- (bool)isHandleAvailableToMessageFrom:(id)arg1;
- (void)isHandleMessageable:(id)arg1 completion:(id /* block */)arg2;
- (void)isHandleMessageableForPresence:(id)arg1 completion:(id /* block */)arg2;
- (bool)isValidURI:(id)arg1;
- (id)pushManager;
- (id)registerIDSDeviceChangedObserver:(id /* block */)arg1;
- (id)registeredIDSDeviceChangedObservers;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)arg1;
- (id)selfAddressedURIForURI:(id)arg1;
- (bool)sendMessage:(id)arg1 toHandle:(id)arg2 fromHandle:(id)arg3 limitToPresenceCapable:(bool)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 toHandles:(id)arg2 fromHandle:(id)arg3 limitToPresenceCapable:(bool)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessageToSelfDevices:(id)arg1 limitToPresenceCapable:(bool)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (id)serviceIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setPushManager:(id)arg1;
- (void)setRegisteredIDSDeviceChangedObservers:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)signPayload:(id)arg1 completion:(id /* block */)arg2;
- (id)tokenURI;
- (void)unregisterIDSDeviceChangedObserver:(id)arg1;
- (void)verifySignedPayload:(id)arg1 matchesPayload:(id)arg2 fromTokenURI:(id)arg3 completion:(id /* block */)arg4;

@end
