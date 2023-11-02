
@interface TailspinSymbolicationClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_initConnection;
- (id)connection;
- (void)invalidateConnection;
- (void)setConnection:(id)arg1;
- (id)symbolicateUUID:(id)arg1 pid:(int)arg2 path:(id)arg3 offsets:(id)arg4 options:(id)arg5;

@end
