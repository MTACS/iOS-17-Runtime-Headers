
@interface VSVerificationStateResetOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    NSOperationQueue * _privateQueue;
    NSURLSessionTask * _resetStateTask;
    VSOptional * _result;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) NSURLSessionTask *resetStateTask;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (void)_resetVerificationStateWithURL:(id)arg1;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)privateQueue;
- (id)resetStateTask;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResetStateTask:(id)arg1;
- (void)setResult:(id)arg1;

@end
