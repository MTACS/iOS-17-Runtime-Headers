
@interface AMSSyncAccountFlagsTask : AMSTask {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)performSync;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;

@end
