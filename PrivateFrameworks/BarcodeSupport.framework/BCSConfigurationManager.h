
@interface BCSConfigurationManager : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)processAppClipImageWithURL:(id)arg1 scale:(double)arg2 completion:(id /* block */)arg3;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;
- (void)setUpQRCodeControlCenterModuleWithCompletionHandler:(id /* block */)arg1;

@end
