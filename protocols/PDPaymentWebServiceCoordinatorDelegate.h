
@protocol PDPaymentWebServiceCoordinatorDelegate <NSObject>

@optional

- (void)paymentWebServiceCoordinator:(PDPaymentWebServiceCoordinator *)arg1 didDownloadPass:(PKPaymentPass *)arg2;
- (void)paymentWebServiceCoordinator:(PDPaymentWebServiceCoordinator *)arg1 didDownloadPassRemoteAssets:(PKPaymentPass *)arg2;
- (void)paymentWebServiceCoordinator:(PDPaymentWebServiceCoordinator *)arg1 didDownloadSerialNumbersForInstalledPasses:(NSArray *)arg2 inRegion:(NSString *)arg3;
- (void)paymentWebServiceCoordinator:(PDPaymentWebServiceCoordinator *)arg1 didDownloadTransactionReceipt:(PKTransactionReceipt *)arg2 forTransactionWithIdentifier:(NSString *)arg3;
- (void)paymentWebServiceCoordinator:(PDPaymentWebServiceCoordinator *)arg1 didRegisterCredentialWithIdentifier:(NSString *)arg2 response:(PKPaymentRegisterCredentialResponse *)arg3 error:(NSError *)arg4;
- (void)paymentWebServiceCoordinatorBackgroundSessionDidBecomeInvalid:(PDPaymentWebServiceCoordinator *)arg1;
- (void)paymentWebServiceCoordinatorWebServiceDidChange:(PDPaymentWebServiceCoordinator *)arg1;

@end
