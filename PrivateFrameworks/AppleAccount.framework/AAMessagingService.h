
@interface AAMessagingService : NSObject <AAIDSMessagingService, AAIDSMessagingServiceInternal, IDSServiceDelegate> {
    <AAMessagingServiceDelegate> * _custodianDelegate;
    NSObject<OS_dispatch_queue> * _incomingMessageQueue;
    <AAMessagingServiceDelegate> * _inheritanceDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingCustodianMessages;
    NSMutableArray * _pendingInheritanceMessages;
    IDSIDQueryController * _queryController;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
    NSString * _serviceName;
}

@property (nonatomic) <AAMessagingServiceDelegate> *custodianDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AAMessagingServiceDelegate> *inheritanceDelegate;
@property (nonatomic, readonly, copy) NSMutableArray *pendingCustodianMessages;
@property (nonatomic, readonly, copy) NSMutableArray *pendingInheritanceMessages;
@property (readonly) Class superclass;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)_addMessageToPendingCustodianMessages:(id)arg1;
- (void)_addMessageToPendingInheritanceMessages:(id)arg1;
- (id)_createNewCapabilitySetFrom:(id)arg1;
- (void)_getCurrentRemoteDevices:(id)arg1 completion:(id /* block */)arg2;
- (id)_optionsDictionaryWithResponseIdentifier:(id)arg1 fireAndForget:(bool)arg2 requiredCapabilities:(id)arg3 lackingCapabilities:(id)arg4;
- (void)_processMessage:(id)arg1;
- (void)_processPendingIDSMessagesOfType:(long long)arg1;
- (id)custodianDelegate;
- (void)doDestinations:(id)arg1 haveIneligibleDeviceForCapability:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchCapability:(id)arg1 destinations:(id)arg2 completion:(id /* block */)arg3;
- (id)inheritanceDelegate;
- (id)initWithServiceName:(id)arg1;
- (void)partitionByCapability:(id)arg1 completion:(id /* block */)arg2;
- (id)pendingCustodianMessages;
- (id)pendingInheritanceMessages;
- (id)sendMessage:(id)arg1 destinations:(id)arg2 responseIdentifier:(id)arg3 fireAndForget:(bool)arg4 requiredCapabilities:(id)arg5 lackingCapabilities:(id)arg6 error:(id*)arg7;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCustodianDelegate:(id)arg1;
- (void)setInheritanceDelegate:(id)arg1;

@end
