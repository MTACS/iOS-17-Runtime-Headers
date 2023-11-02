
@interface AMSCardEnrollment : NSObject

+ (id)_cardEligibilityStatusForCountryCode:(id)arg1;
+ (id)_currentIdentifier;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayClassicWithAccount:(id)arg1 options:(id)arg2 countryCode:(id)arg3 paymentNetworks:(id)arg4;
+ (id)_shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;
+ (bool)_shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1;
+ (bool)beginCardEnrollmentAttemptWithBag:(id)arg1 account:(id)arg2;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)arg1 buyParams:(id)arg2 purchaseResult:(id)arg3;
+ (bool)isAURUMWithBag:(id)arg1;
+ (bool)isApplePayWalletRefreshedForBag:(id)arg1;
+ (id)paymentServicesMerchantURL;
+ (bool)shouldAttemptApplePayClassicWithBag:(id)arg1 accessControlRef:(struct __SecAccessControl { }*)arg2;
+ (bool)shouldAttemptApplePayClassicWithBag:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(struct __SecAccessControl { }*)arg3;
+ (bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 account:(id)arg3 options:(id)arg4;
+ (bool)shouldAttemptAutoEnrollmentWithBag:(id)arg1 accessControlRef:(struct __SecAccessControl { }*)arg2;
+ (bool)shouldAttemptAutoEnrollmentWithBag:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (bool)shouldCheckForWalletBiometricsForBag:(id)arg1;
+ (bool)shouldUseApplePayClassicWithBag:(id)arg1;
+ (bool)shouldUseAutoEnrollmentWithBag:(id)arg1;
+ (void)updateAutoEnrollmentIdentifier;

@end
