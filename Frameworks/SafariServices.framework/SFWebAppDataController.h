
@interface SFWebAppDataController : NSObject {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    _SFWebAppViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFWebAppServiceViewControllerProtocol> * _serviceProxy;
    NSString * _webClipIdentifier;
}

- (void).cxx_destruct;
- (void)clearWebsiteDataWithCompletion:(id /* block */)arg1;
- (id)initWithWebClipIdentifier:(id)arg1;

@end
