
@interface _SFLinkRedirectionResolver : NSObject <SFSafariViewControllerDelegateInternal> {
    id /* block */  _completionHandler;
    SFLinkRedirectionViewController * _redirectionViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SFSafariViewController *safariViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)safariViewController;
- (void)safariViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3;

@end
