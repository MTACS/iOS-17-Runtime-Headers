
@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation {
    NSArray * _applicationAccountProviders;
    VSAuditToken * _auditToken;
    VSDevice * _currentDevice;
    VSOptional * _result;
    NSOperationQueue * _subqueue;
}

@property (nonatomic, copy) NSArray *applicationAccountProviders;
@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) VSDevice *currentDevice;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) NSOperationQueue *subqueue;

- (void).cxx_destruct;
- (id)applicationAccountProviders;
- (id)auditToken;
- (id)currentDevice;
- (void)executionDidBegin;
- (id)init;
- (id)result;
- (void)setApplicationAccountProviders:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSubqueue:(id)arg1;
- (id)subqueue;

@end
