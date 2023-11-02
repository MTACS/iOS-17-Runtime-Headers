
@interface AMSCardEnrollmentVerificationTask : AMSTask

+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(bool)arg2;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(bool)arg2 bag:(id)arg3;
+ (void)verifyPayment:(id)arg1 isDefault:(bool)arg2 bag:(id)arg3 completion:(id /* block */)arg4;
+ (void)verifyPayment:(id)arg1 isDefault:(bool)arg2 completion:(id /* block */)arg3;

@end
