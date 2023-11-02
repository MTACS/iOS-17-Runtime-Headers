
@interface __HMDRegisteredAccountIdentity : __HMDRegisteredIdentity {
    HMDAccount * _account;
}

@property (readonly) HMDAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1 account:(id)arg2;

@end
