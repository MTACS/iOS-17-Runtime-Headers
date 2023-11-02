
@interface PKPaymentPassActionDataController : NSObject <PKPerformActionViewControllerDelegate, PKSelectActionViewControllerDelegate> {
    unsigned long long  _actionType;
    NSArray * _actions;
    PKTransitBalanceModel * _balanceModel;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchViewController:(id /* block */)arg1;
- (id)initWithPass:(id)arg1 actions:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4 actionType:(unsigned long long)arg5 balanceModel:(id)arg6;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)selectActionViewControllerDidCancel:(id)arg1;
- (void)selectActionViewControllerDidPerformAction:(id)arg1;

@end
