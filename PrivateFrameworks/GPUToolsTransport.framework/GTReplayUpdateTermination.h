
@interface GTReplayUpdateTermination : GTReplayRequest <NSSecureCoding> {
    <GTXPCConnection> * _connection;
    NSObject<OS_xpc_object> * _path;
}

@property (nonatomic, retain) <GTXPCConnection> *connection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (void)setConnection:(id)arg1;
- (void)setPath:(id)arg1;

@end
