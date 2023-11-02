
@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    AMSURLSession * _session;
    NSURLSessionTask * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSessionTask *task;

- (void).cxx_destruct;
- (id)delegateQueue;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithSession:(id)arg1 task:(id)arg2;
- (id)session;
- (void)setDelegateQueue:(id)arg1;
- (id)task;

@end
