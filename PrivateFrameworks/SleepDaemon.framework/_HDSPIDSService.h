
@interface _HDSPIDSService : NSObject <HDSPIDSService, IDSServiceDelegate> {
    <HDSPIDSServiceDelegate> * _delegate;
    bool  _isCloudService;
    <HKSPQueueBackedScheduler> * _scheduler;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPIDSServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCloudService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cloudDestinations;
- (id)_localDestinations;
- (id)_loggingDescription;
- (void)_sendSerializedMessage:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)initWithIsCloudService:(bool)arg1 scheduler:(id)arg2;
- (bool)isCloudService;
- (void)sendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;

@end
