
@interface PKDashboardPayLaterEligibleSpendItem : NSObject <PKDashboardItem> {
    PKAccount * _payLaterAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKAccount *payLaterAccount;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithPayLaterAccount:(id)arg1;
- (id)payLaterAccount;

@end
