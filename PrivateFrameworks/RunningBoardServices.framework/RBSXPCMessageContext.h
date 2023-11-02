
@interface RBSXPCMessageContext : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _handoffToken;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;

+ (id)currentContext;
+ (void)handoffContextOnQueue:(id)arg1 block:(id /* block */)arg2;
+ (void)runWithoutContext:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)handoffToQueue:(id)arg1 block:(id /* block */)arg2;

@end
