
@interface SFSafariViewControllerDataStore : NSObject {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    SFBrowserRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> * _serviceProxy;
}

+ (id)defaultDataStore;

- (void).cxx_destruct;
- (id)_init;
- (void)clearWebsiteDataWithCompletionHandler:(id /* block */)arg1;

@end
