
@interface AMSDeviceIdentityCertificateTask : AMSTask {
    <AMSBagProtocol> * _bag;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;

- (void).cxx_destruct;
- (id)bag;
- (id)initWithBag:(id)arg1;
- (id)performDeviceIdentityRequestForAbsinthe;
- (id)performDeviceIdentityRequestForFraudReport;
- (id)performDeviceIdentityRequestWithBaaOptions:(id)arg1 ttlBagKey:(id)arg2 logInformation:(id)arg3;
- (id)requestQueue;
- (void)setBag:(id)arg1;
- (void)setRequestQueue:(id)arg1;

@end
