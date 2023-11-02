
@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {
    NSString * _APIToken;
    NSString * _webAuthToken;
}

@property (nonatomic, copy) NSString *APIToken;
@property (nonatomic, retain) <CKFetchWebAuthTokenOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSString *webAuthToken;

- (void).cxx_destruct;
- (id)APIToken;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setAPIToken:(id)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end
