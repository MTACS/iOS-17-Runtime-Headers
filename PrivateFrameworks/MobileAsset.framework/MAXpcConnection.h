
@interface MAXpcConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSString * _connectionId;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) NSString *connectionId;

- (void).cxx_destruct;
- (id)connection;
- (id)connectionId;
- (id)initWithServiceName:(id)arg1;
- (bool)notValid;

@end
