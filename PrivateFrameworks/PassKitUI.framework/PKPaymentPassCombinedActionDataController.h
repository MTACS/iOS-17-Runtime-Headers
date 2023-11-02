
@interface PKPaymentPassCombinedActionDataController : NSObject <PKCombinedActionViewControllerDelegate> {
    NSArray * _actionGroups;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKTransitBalanceModel * _transitBalanceModel;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)combinedActionViewControllerDidCancel:(id)arg1;
- (void)combinedActionViewControllerDidFinish:(id)arg1;
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4 balanceModel:(id)arg5;
- (id)viewController;

@end
