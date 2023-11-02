
@interface STMTelemetryController : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)getTelemetry:(id /* block */)arg1;
- (void)retrieveTelemetryWithCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)stopService;

@end
