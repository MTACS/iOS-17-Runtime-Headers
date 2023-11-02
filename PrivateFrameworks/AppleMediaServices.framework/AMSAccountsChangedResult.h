
@interface AMSAccountsChangedResult : NSObject <AMSHashable> {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hashedDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)hashedDescription;
- (id)initWithAccount:(id)arg1;

@end
