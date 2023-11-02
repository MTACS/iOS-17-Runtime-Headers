
@interface SBSClient : NSObject {
    unsigned long long  _clientType;
    NSXPCConnection * _connection;
}

@property (nonatomic) unsigned long long clientType;
@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (unsigned long long)clientType;
- (id)connection;
- (void)setClientType:(unsigned long long)arg1;
- (void)setConnection:(id)arg1;

@end
