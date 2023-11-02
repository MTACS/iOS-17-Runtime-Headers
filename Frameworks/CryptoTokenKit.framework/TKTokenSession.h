
@interface TKTokenSession : NSObject {
    LAContext * _LAContext;
    NSXPCConnection * _caller;
    NSNumber * _callerPID;
    struct { 
        unsigned int val[8]; 
    }  _creatorAuditToken;
    <TKTokenSessionDelegate> * _delegate;
    id  _keepAlive;
    NSDictionary * _parameters;
    NSObject<OS_dispatch_queue> * _queue;
    TKToken * _token;
}

@property (nonatomic, readonly) LAContext *LAContext;
@property (nonatomic, readonly) NSXPCConnection *caller;
@property (nonatomic, retain) NSNumber *callerPID;
@property (nonatomic) struct { unsigned int x1[8]; } creatorAuditToken;
@property <TKTokenSessionDelegate> *delegate;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, readonly) <TKTokenSessionPrivateDelegate> *privateDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) TKToken *token;

+ (id)_localizedString:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)LAContext;
- (void)attestKey:(id)arg1 usingKey:(id)arg2 nonce:(id)arg3 reply:(id /* block */)arg4;
- (void)auditAuthOperation:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 success:(bool)arg3;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(id /* block */)arg3;
- (void)beginRequest;
- (void)bumpKey:(id)arg1 reply:(id /* block */)arg2;
- (id)caller;
- (id)callerPID;
- (bool)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4;
- (void)commitKey:(id)arg1 reply:(id /* block */)arg2;
- (void)createObjectWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (struct { unsigned int x1[8]; })creatorAuditToken;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(id /* block */)arg5;
- (id)delegate;
- (void)deleteObject:(id)arg1 reply:(id /* block */)arg2;
- (void)endRequest;
- (id)errorWithResult:(id)arg1 operation:(id)arg2 forError:(id)arg3;
- (void)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(id /* block */)arg3;
- (void)evaluateAuthOperation:(id)arg1 tokenOperation:(long long)arg2 reply:(id /* block */)arg3;
- (void)evaluateAuthOperation:(id)arg1 tokenOperation:(long long)arg2 retry:(bool)arg3 reply:(id /* block */)arg4;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(id /* block */)arg3;
- (void)getAdvertisedItemsWithReply:(id /* block */)arg1;
- (void)getAttributesOfObject:(id)arg1 isCertificate:(bool)arg2 reply:(id /* block */)arg3;
- (id)initWithToken:(id)arg1;
- (id)keepAlive;
- (id)name;
- (void)objectID:(id)arg1 operation:(long long)arg2 inputData:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(id /* block */)arg6;
- (id)parameters;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(id /* block */)arg5;
- (id)privateDelegate;
- (id)queue;
- (void)setCaller:(id)arg1;
- (void)setCallerPID:(id)arg1;
- (void)setCreatorAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeepAlive:(id)arg1;
- (void)setLAContext:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(id /* block */)arg4;
- (void)terminate;
- (id)token;

@end
