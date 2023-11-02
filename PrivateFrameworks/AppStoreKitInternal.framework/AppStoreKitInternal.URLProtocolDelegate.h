
@interface AppStoreKitInternal.URLProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void dialogStyle;
}

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
