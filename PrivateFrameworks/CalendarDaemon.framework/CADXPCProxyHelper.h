
@interface CADXPCProxyHelper : NSObject {
    NSXPCConnection * _connection;
    <CADXPCProxyHelperDelegate> * _delegate;
    CADDatabaseInitializationOptions * _initializationOptions;
    Protocol * _protocol;
    bool  _synchronous;
}

@property (nonatomic) <CADXPCProxyHelperDelegate> *delegate;
@property (retain) CADDatabaseInitializationOptions *initializationOptions;

- (void).cxx_destruct;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withErrorCode:(long long)arg3;
- (id)_getReplyBlockFromInvocation:(id)arg1;
- (id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2;
- (bool)_shouldResendInitializationOptionsForInvocation:(id)arg1;
- (void)_tryInvokeWithGenerationValidation:(id)arg1 target:(id)arg2 replyBlock:(id)arg3 contextHolder:(id)arg4;
- (bool)_validateCADObjectIDsInInvocationArguments:(id)arg1;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(bool)arg3;
- (id)initializationOptions;
- (id)methodSignatureForSelector:(SEL)arg1;
- (long long)replyBlockArgumentIndex:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitializationOptions:(id)arg1;

@end
