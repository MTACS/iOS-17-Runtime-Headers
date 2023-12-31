
@interface ATLockdownListener : ATMessageLinkListener {
    NSObject<OS_xpc_object> * _connection;
    NSString * _serviceName;
}

@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (void)_handleNewConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)serviceName;
- (bool)start;
- (void)stop;

@end
