
@interface CBSClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)defaultClient;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (id)remoteAlertServer;
- (void)setConnection:(id)arg1;
- (id)systemServicesServer;

@end
