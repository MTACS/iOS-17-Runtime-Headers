
@interface ICQStoragePlanRecommendation : NSObject {
    ACAccount * _account;
}

@property (nonatomic, retain) ACAccount *account;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)account;
- (void)calculateExtraQuotaNeededToSyncIsAccountFull:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1;
- (void)setAccount:(id)arg1;

@end
