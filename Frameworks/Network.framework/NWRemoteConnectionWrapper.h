
@interface NWRemoteConnectionWrapper : NSObject {
    NSUUID * _clientID;
    NWConnection * _connection;
}

@property (retain) NSUUID *clientID;
@property (retain) NWConnection *connection;

- (void).cxx_destruct;
- (id)clientID;
- (id)connection;
- (void)setClientID:(id)arg1;
- (void)setConnection:(id)arg1;

@end
