
@interface PKSafariCardNotificationManager : NSObject {
    PKPaymentService * _paymentService;
}

- (void).cxx_destruct;
- (void)_eligibleToCheckWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)userDidPerformAction:(long long)arg1 withCard:(id)arg2;

@end
