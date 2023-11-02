
@interface NFSecureXPCEventPublisher : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (bool)_setupConnection;
- (id)connection;
- (void)dealloc;
- (id)initWithMachPort:(id)arg1 queue:(id)arg2;
- (id)queue;
- (bool)sendDictionary:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendSimpleEvent:(id)arg1;
- (void)sendSimpleEvent:(id)arg1 objectNumber:(id)arg2;
- (void)sendSimpleEvent:(id)arg1 objectString:(id)arg2;
- (id)serviceName;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
