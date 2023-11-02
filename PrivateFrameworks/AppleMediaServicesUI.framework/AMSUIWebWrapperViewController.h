
@interface AMSUIWebWrapperViewController : AMSUIWebViewController <AMSUIWebDelegate, AMSUIWebPagePresenter> {
    AMSUIWebClientContext * _wrapperContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUIWebClientContext *wrapperContext;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)setWrapperContext:(id)arg1;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)webViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;
- (id)wrapperContext;

@end
