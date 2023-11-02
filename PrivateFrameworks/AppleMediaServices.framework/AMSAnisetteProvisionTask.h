
@interface AMSAnisetteProvisionTask : AMSTask {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSData * _data;
    long long  _type;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_createFinishProvisioningRequestWithClientData:(id)arg1 error:(id*)arg2;
- (bool)_processFinishProvisioningResult:(id)arg1 sessionID:(unsigned int)arg2 error:(id*)arg3;
- (id)_startProvisioningWithOutputSessionID:(unsigned int*)arg1 error:(id*)arg2;
- (id)account;
- (id)bag;
- (id)data;
- (id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
- (id)performProvisioning;
- (long long)type;

@end
