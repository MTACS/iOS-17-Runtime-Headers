
@interface ICQUsageQuotaRequest : AARequest {
    ACAccount * _account;
    ACAccountStore * _accountStore;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;

+ (void)addHeadersForPrimaryAccountToRequest:(id)arg1;
+ (void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)accountStore;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 URLString:(id)arg3;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (id)urlRequest;

@end
