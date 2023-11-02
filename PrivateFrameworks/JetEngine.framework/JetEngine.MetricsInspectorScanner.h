
@interface JetEngine.MetricsInspectorScanner : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    void foundServices;
    void serviceBrowser;
    void stateLock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;

@end
