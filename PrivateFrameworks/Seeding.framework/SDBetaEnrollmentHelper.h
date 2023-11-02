
@interface SDBetaEnrollmentHelper : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection * _daemonConnection;
}

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addFBAHelpMenu:(id /* block */)arg1;
- (void)addFBASymlink:(id /* block */)arg1;
- (void)connectToDaemon;
- (id)daemonConnection;
- (id)init;
- (bool)isPreReleaseInstallationAllowed;
- (id)remoteObjectProxy;
- (void)removeBetaEnrollmentData;
- (void)removeFBAHelpMenu:(id /* block */)arg1;
- (void)removeSeedEnrollmentCookie:(id /* block */)arg1;
- (void)setDaemonConnection:(id)arg1;
- (id)synchronousRemoteObjectProxy;

@end
