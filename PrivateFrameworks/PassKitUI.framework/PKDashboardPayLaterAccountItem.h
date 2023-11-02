
@interface PKDashboardPayLaterAccountItem : NSObject <PKDashboardItem> {
    PKCurrencyAmount * _dueNext30Days;
    PKAccount * _payLaterAccount;
    PKCurrencyAmount * _totalPending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKCurrencyAmount *dueNext30Days;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKAccount *payLaterAccount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKCurrencyAmount *totalPending;

+ (id)identifier;

- (void).cxx_destruct;
- (id)dueNext30Days;
- (id)initWithPayLaterAccount:(id)arg1 dueNext30Days:(id)arg2 totalPending:(id)arg3;
- (id)payLaterAccount;
- (id)totalPending;

@end
