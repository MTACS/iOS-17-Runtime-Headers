
@protocol PKPaymentServiceExportedInterface

@required

- (void)credential:(PKAppletSubcredential *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 didUpdateRangingSuspensionReasons:(unsigned long long)arg3;
- (void)didReceiveDeviceSharingCapabilities:(PKDeviceSharingCapabilities *)arg1 forHandle:(NSString *)arg2;
- (void)didReceivePendingProvisioningUpdate:(NSArray *)arg1;
- (void)didRecieveCredentialInvitation:(PKAppletSubcredentialSharingInvitation *)arg1;
- (void)didRemoveTransactionsWithSourceIdentifierMapping:(NSDictionary *)arg1;
- (void)didUpdateApplicationMessages:(NSArray *)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)didUpdateFamilyMembers:(NSArray *)arg1;
- (void)featureApplicationAdded:(PKFeatureApplication *)arg1;
- (void)featureApplicationChanged:(PKFeatureApplication *)arg1;
- (void)featureApplicationRemoved:(PKFeatureApplication *)arg1;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didReceiveValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg2;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didUpdateTiles:(NSArray *)arg2;
- (void)paymentDeviceDidEnterFieldWithProperties:(PKFieldProperties *)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveBalanceUpdate:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceivePlanUpdate:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateBalanceReminder:(PKPaymentBalanceReminder *)arg2 forBalanceWithIdentifier:(NSString *)arg3;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)sharesDidUpdateWithPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)transactionBatch:(void *)arg1 moreComing:(void *)arg2 readyForNextBatch:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)transactionSourceIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)transactionSourceIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)transactionWithIdentifier:(NSString *)arg1 didDownloadTransactionReceipt:(PKTransactionReceipt *)arg2;

@end
