
@interface PKReprocessMerchantActivity : UIActivity {
    PKPaymentPass * _paymentPass;
    PKPaymentTransaction * _transaction;
}

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
