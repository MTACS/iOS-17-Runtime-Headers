
@interface IDSXPCConnectionWrapper : NSObject <IDSXPCConnectionProtocol> {
    NSObject<OS_xpc_object> * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithConnection:(id)arg1;
- (void)resume;

@end
