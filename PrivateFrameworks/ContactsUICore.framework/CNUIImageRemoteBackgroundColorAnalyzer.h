
@interface CNUIImageRemoteBackgroundColorAnalyzer : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)_closeConnection;
- (void)_openConnectionIfNeeded;
- (void)dealloc;
- (void)getBackgroundColorOnImageData:(id)arg1 reply:(id /* block */)arg2;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;

@end
