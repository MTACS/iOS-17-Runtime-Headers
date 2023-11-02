
@interface AMSPushRegisterTask : AMSTask {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSString * _environment;
    NSData * _token;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly, copy) NSString *environment;
@property (nonatomic, readonly, copy) NSData *token;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)environment;
- (id)initWithAccount:(id)arg1 token:(id)arg2 environment:(id)arg3 bag:(id)arg4;
- (id)performTask;
- (id)token;

@end
