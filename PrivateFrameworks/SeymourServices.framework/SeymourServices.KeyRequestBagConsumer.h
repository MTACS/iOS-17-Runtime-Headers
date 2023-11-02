
@interface SeymourServices.KeyRequestBagConsumer : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void $__lazy_storage_$_amsSession;
    void accountProvider;
    void bagConsumer;
}

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
