
@interface SDBetaEnrollmentHelperDaemon : NSObject <NSXPCListenerDelegate, SDBetaEnrollmentHelperDaemonInterface> {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFBAHelpMenu:(id /* block */)arg1;
- (void)addFBASymlink:(id /* block */)arg1;
- (id)connection;
- (void)isPreReleaseInstallationAllowed:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeBetaEnrollmentData:(id /* block */)arg1;
- (void)removeFBAHelpMenu:(id /* block */)arg1;
- (void)removeSeedEnrollmentCookie:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)start;

@end
