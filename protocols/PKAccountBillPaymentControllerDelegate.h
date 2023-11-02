
@protocol PKAccountBillPaymentControllerDelegate <NSObject>

@required

- (void)accountBillPaymentController:(PKAccountBillPaymentController *)arg1 hasChangedState:(unsigned long long)arg2 error:(NSError *)arg3 updatedAccount:(PKAccount *)arg4;
- (NSString *)presentationSceneIdentifierForAccountBillPaymentController:(PKAccountBillPaymentController *)arg1;

@optional

- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(NSString *)arg1 style:(long long)arg2 paymentService:(PKPaymentService *)arg3;

@end
