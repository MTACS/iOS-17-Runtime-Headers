
@interface HMDAccountHandleResolveOperation : HMFOperation <HMDIDSServiceDelegate, HMFLogging> {
    HMDAccountHandle * _handle;
    HMDIDSMessageContext * _messageContext;
    NSMutableArray * _resolveBlocks;
    <HMDIDSService> * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDIDSMessageContext *messageContext;
@property (readonly) NSMutableArray *resolveBlocks;
@property (readonly) <HMDIDSService> *service;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (double)timeout;

- (void).cxx_destruct;
- (void)addResolveBlock:(id /* block */)arg1;
- (id)handle;
- (id)init;
- (id)initWithHandle:(id)arg1;
- (id)initWithQualityOfService:(long long)arg1 timeout:(double)arg2;
- (id)initWithTimeout:(double)arg1;
- (id)logIdentifier;
- (void)main;
- (id)messageContext;
- (id)resolveBlocks;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setMessageContext:(id)arg1;

@end
