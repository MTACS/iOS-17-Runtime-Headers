
@interface AMSHandleDialogResultTask : AMSTask {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    NSError * _error;
    NSString * _proxyBundleId;
    AMSDialogResult * _result;
}

@property (nonatomic, copy) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, copy) NSString *proxyBundleId;
@property (nonatomic, readonly) AMSDialogRequest *request;
@property (nonatomic, readonly) AMSDialogResult *result;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)error;
- (id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4;
- (id)initWithResult:(id)arg1 bag:(id)arg2;
- (id)perform;
- (id)proxyBundleId;
- (id)request;
- (id)result;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setProxyBundleId:(id)arg1;

@end
