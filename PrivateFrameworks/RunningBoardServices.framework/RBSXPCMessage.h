
@interface RBSXPCMessage : NSObject {
    SEL  _method;
    RBSXPCCoder * _payload;
    NSObject<OS_xpc_object> * _xpc_message;
}

@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) SEL method;
@property (nonatomic, readonly) RBSXPCMessageReply *reply;

+ (id)messageForMethod:(SEL)arg1 varguments:(id)arg2;
+ (id)messageForXPCMessage:(id)arg1;

- (void).cxx_destruct;
- (id)decodeArgumentCollection:(Class)arg1 withClass:(Class)arg2 atIndex:(unsigned long long)arg3 allowNil:(bool)arg4 error:(out id*)arg5;
- (id)decodeArgumentWithClass:(Class)arg1 atIndex:(unsigned long long)arg2 allowNil:(bool)arg3 error:(out id*)arg4;
- (id)init;
- (bool)isEmpty;
- (SEL)method;
- (id)reply;
- (oneway void)sendToConnection:(id)arg1;
- (oneway void)sendToConnection:(id)arg1 completion:(id /* block */)arg2;
- (id)sendToConnection:(id)arg1 error:(out id*)arg2;
- (oneway void)sendToConnection:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;

@end
