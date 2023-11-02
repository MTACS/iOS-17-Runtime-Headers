
@interface NPKSubcredentialProvisioningService : NSObject <IDSServiceDelegate> {
    NSMutableDictionary * _outstandingRequests;
    NSObject<OS_dispatch_queue> * _subcredentialProvisioningQueue;
    IDSService * _subcredentialService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *subcredentialProvisioningQueue;
@property (nonatomic, retain) IDSService *subcredentialService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sendOptions;
- (id)_sendProtobuf:(id)arg1 responseExpected:(bool)arg2 extraOptions:(id)arg3;
- (void)_setUpSubcredentialProvisioningQueue;
- (void)_setUpSubcredentialProvisioningService;
- (void)_trackOutstandingRequestWithMessageIdentifier:(id)arg1 completionHandler:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)init;
- (bool)isPairedDeviceConnected;
- (id)outstandingRequests;
- (void)registerProtobufActionsForService:(id)arg1;
- (id)sendProtobuf:(id)arg1 responseExpected:(bool)arg2;
- (id)sendProtobuf:(id)arg1 responseExpected:(bool)arg2 extraOptions:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setOutstandingRequests:(id)arg1;
- (void)setSubcredentialService:(id)arg1;
- (id)subcredentialProvisioningQueue;
- (id)subcredentialService;
- (void)trackOutstandingRequestWithMessageIdentifier:(id)arg1 completionHandler:(id)arg2 errorHandler:(id /* block */)arg3;

@end
