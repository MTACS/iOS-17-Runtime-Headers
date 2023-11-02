
@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol> {
    NSString * _clientID;
    NSString * _clientIDRaw;
    int  _clientProcessIdentifier;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _genericBlock;
    id /* block */  _progressBlock;
}

@property (nonatomic, readonly, retain) NSString *clientID;
@property (nonatomic, readonly, retain) NSString *clientIDRaw;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ genericBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ progressBlock;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (id)clientIDRaw;
- (int)clientProcessIdentifier;
- (id)completionQueue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)executeGenericBlock:(id)arg1;
- (void)executeGenericBlock:(id)arg1 disableVerboseLogging:(bool)arg2;
- (void)executeProgressBlock:(id)arg1;
- (void)executeProgressBlock:(id)arg1 disableVerboseLogging:(bool)arg2;
- (id /* block */)genericBlock;
- (id)initWithClientID:(id)arg1 completionQueue:(id)arg2 genericBlock:(id /* block */)arg3;
- (id)initWithClientID:(id)arg1 completionQueue:(id)arg2 genericBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4;
- (id)initWithClientID:(id)arg1 completionQueue:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id /* block */)progressBlock;
- (id)summary;

@end
