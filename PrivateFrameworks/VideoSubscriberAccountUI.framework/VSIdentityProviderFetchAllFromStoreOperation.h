
@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)privateQueue;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;

@end
