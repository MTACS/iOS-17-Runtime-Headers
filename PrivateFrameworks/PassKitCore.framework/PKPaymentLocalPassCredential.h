
@interface PKPaymentLocalPassCredential : PKPaymentCredential {
    NSString * _passTypeIdentifier;
    PKPaymentPass * _paymentPass;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, readonly, copy) PKPaymentPass *paymentPass;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) NSString *summaryMetadataDescription;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (bool)couldSupportSuperEasyProvisioning;
- (id)description;
- (id)detailDescription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPaymentPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passTypeIdentifier;
- (id)paymentPass;
- (id)serialNumber;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (id)summaryMetadataDescription;
- (bool)supportsSuperEasyProvisioning;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)_initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 credentialType:(long long)arg3 sanitizedPrimaryAccountNumber:(id)arg4 longDescription:(id)arg5 cardType:(long long)arg6;

@end
