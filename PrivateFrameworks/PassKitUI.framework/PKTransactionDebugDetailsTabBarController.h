
@interface PKTransactionDebugDetailsTabBarController : UITabBarController {
    PKTransactionCloudKitDebugDetailsViewController * _cloudKitViewController;
    UIBarButtonItem * _shareButton;
    PKTransactionSpotlightDebugDetailsViewController * _spotlightViewController;
    PKPaymentTransaction * _transaction;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

- (void).cxx_destruct;
- (void)_handleShareButton:(id)arg1;
- (id)initWithTransaction:(id)arg1 transactionSourceCollection:(id)arg2;

@end
