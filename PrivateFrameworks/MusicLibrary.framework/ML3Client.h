
@interface ML3Client : NSObject {
    NSString * _bundleID;
    NSXPCConnection * _connection;
    int  _processID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (getter=isDaemonClient, nonatomic, readonly) bool daemonClient;
@property (nonatomic, readonly) int processID;

+ (id)daemonClient;
+ (id)processClient;

- (void).cxx_destruct;
- (id)bundleID;
- (id)connection;
- (id)description;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)isDaemonClient;
- (int)processID;

@end
