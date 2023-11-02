
@interface PKPassDeleteHelper : NSObject

+ (bool)_canDeletePaymentPass:(id)arg1 transitPassProperties:(id)arg2;
+ (void)deletePaymentPass:(id)arg1 withDeleteHander:(id)arg2 passLibraryDataProvider:(id)arg3 presentingViewController:(id)arg4;
+ (void)deletePaymentPassAlertCopyForPass:(id)arg1 webService:(id)arg2 paymentServiceDataProvider:(id)arg3 isBridge:(bool)arg4 completion:(id /* block */)arg5;
+ (void)deletePaymentPassAlertCopyForPass:(id)arg1 withAccount:(id)arg2 paymentServiceDataProvider:(id)arg3 transitBalanceModel:(id)arg4 transitPassProperties:(id)arg5 merchantTokensResponse:(id)arg6 isBridge:(bool)arg7 completion:(id /* block */)arg8;
+ (bool)hasAppleCashMerchantTokenForMerchantTokensResponse:(id)arg1;
+ (void)presentDeleteBarcodePassAlertForPass:(id)arg1 withHandler:(id)arg2 presentingViewController:(id)arg3;
+ (void)presentDeletePaymentPassAlertForPass:(id)arg1 withAccount:(id)arg2 paymentServiceDataProvider:(id)arg3 transitBalanceModel:(id)arg4 transitPassProperties:(id)arg5 detailViewStyle:(long long)arg6 deleteHander:(id)arg7 passLibraryDataProvider:(id)arg8 presentingViewController:(id)arg9;
+ (void)presentMerchantTokenDeletePaymentPassAlertForPass:(id)arg1 withAccount:(id)arg2 merchantTokensResponse:(id)arg3 deleteHander:(id)arg4 passLibraryDataProvider:(id)arg5 navigationController:(id)arg6 presentingViewController:(id)arg7 isBridge:(bool)arg8;

@end
