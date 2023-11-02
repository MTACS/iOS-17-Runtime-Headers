
@interface AMSCardEnrollmentPaymentSessionTask : AMSTask

+ (id)_paymentServiceURLStringForMerchantURL:(id)arg1;
+ (id)_performPaymentSessionWithBag:(id)arg1 isForParentalVerification:(bool)arg2;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (void)paymentSessionWithBag:(id)arg1 completion:(id /* block */)arg2;
+ (id)performPaymentSessionEnrollmentWithBag:(id)arg1;
+ (id)performPaymentSessionForVerificationWithBag:(id)arg1;

@end
