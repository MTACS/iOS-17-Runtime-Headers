
@interface AMSAccountDeviceInfoTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    AMSURLRequestEncoder * _requestEncoder;
    NSString * _serialNumber;
    AMSURLSession * _session;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSURLRequestEncoder *requestEncoder;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) AMSURLSession *session;
@property (readonly) Class superclass;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_deviceInfoRequest;
- (id)_requestWithURL:(id)arg1;
- (void)_updateAccountWithInfo:(id)arg1;
- (id)account;
- (id)accountStore;
- (id)bag;
- (id)clientInfo;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 bag:(id)arg3;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 bag:(id)arg3 requestEncoder:(id)arg4 session:(id)arg5 serialNumber:(id)arg6;
- (id)perform;
- (id)requestEncoder;
- (id)serialNumber;
- (id)session;
- (void)setAccountStore:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setRequestEncoder:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSession:(id)arg1;

@end
