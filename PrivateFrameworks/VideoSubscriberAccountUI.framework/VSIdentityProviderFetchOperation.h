
@interface VSIdentityProviderFetchOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    bool  _fetchFromStoreOnly;
    NSString * _identityProviderID;
    NSString * _identityProviderUniqueID;
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic) bool fetchFromStoreOnly;
@property (nonatomic, copy) NSString *identityProviderID;
@property (nonatomic, readonly, copy) NSString *identityProviderUniqueID;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)_fetchAllOperation;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (bool)fetchFromStoreOnly;
- (id)identityProviderID;
- (id)identityProviderUniqueID;
- (id)init;
- (id)initWithIdentityProviderID:(id)arg1;
- (id)initWithIdentityProviderUniqueID:(id)arg1;
- (id)privateQueue;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setFetchFromStoreOnly:(bool)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;

@end
