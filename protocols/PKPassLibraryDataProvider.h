
@protocol PKPassLibraryDataProvider <NSObject>

@required

- (bool)canAddPaymentPass;
- (bool)canAddSecureElementPassWithConfiguration:(PKAddSecureElementPassConfiguration *)arg1;
- (PKPass *)passWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (PKPass *)passWithUniqueID:(NSString *)arg1;
- (NSArray *)paymentPasses;
- (NSString *)peerPaymentPassUniqueID;
- (void)removePass:(PKPass *)arg1;

@optional

- (unsigned long long)countOfPasses;
- (PKPass *)passForProvisioningCredentialHash:(NSString *)arg1;
- (NSArray *)passes;

@end
