
@interface SecSOSStatus : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (void)setConnection:(id)arg1;

@end
