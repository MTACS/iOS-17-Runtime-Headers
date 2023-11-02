
@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem> {
    PKMerchant * _merchant;
    PKPaymentTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKMerchant *merchant;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

+ (id)identifier;

- (void).cxx_destruct;
- (id)merchant;
- (void)setMerchant:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
