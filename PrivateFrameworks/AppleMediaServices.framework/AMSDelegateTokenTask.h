
@interface AMSDelegateTokenTask : AMSDelegateAuthenticateTask {
    AMSProcessInfo * _processInfo;
    AMSURLTaskInfo * _taskInfo;
    AMSURLResult * _urlResult;
}

@property (nonatomic, retain) AMSProcessInfo *processInfo;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic, retain) AMSURLResult *urlResult;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)_parseBiometricsSignatureRequestFromTask:(id)arg1;
- (id)_performFallbackAuthentication;
- (id)authenticateTaskWithRequest:(id)arg1;
- (id)delegateAuthenticateUrl;
- (id)initWithDelegateAuthenticateRequest:(id)arg1 bag:(id)arg2 processInfo:(id)arg3 account:(id)arg4;
- (id)performRetrieveDelegateToken;
- (id)processInfo;
- (void)setProcessInfo:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (void)setUrlResult:(id)arg1;
- (id)taskInfo;
- (id)urlResult;

@end
