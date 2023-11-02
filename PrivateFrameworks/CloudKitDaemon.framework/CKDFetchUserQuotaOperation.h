
@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation {
    unsigned long long  _quotaAvailable;
}

@property (nonatomic, retain) <CKFetchUserQuotaOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) unsigned long long quotaAvailable;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (unsigned long long)quotaAvailable;
- (void)setQuotaAvailable:(unsigned long long)arg1;

@end
