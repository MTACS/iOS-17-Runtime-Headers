
@interface _TtCV20AppleMediaServicesUI7WebView11Coordinator : NSObject <AMSUIWebDelegate> {
    void parent;
}

- (void).cxx_destruct;
- (id)init;
- (void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)webViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;

@end
