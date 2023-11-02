
@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding> {
    NSString * _merchantIdentifier;
    NSURL * _originatingURL;
    NSString * _referrerIdentifier;
    NSString * _signature;
    NSArray * _signedFields;
    bool  _usePaymentSetupFeaturesFromCDN;
}

@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, retain) NSURL *originatingURL;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, copy) NSArray *signedFields;
@property (nonatomic) bool usePaymentSetupFeaturesFromCDN;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)merchantIdentifier;
- (id)originatingURL;
- (id)referrerIdentifier;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignedFields:(id)arg1;
- (void)setUsePaymentSetupFeaturesFromCDN:(bool)arg1;
- (id)signature;
- (id)signedFields;
- (bool)usePaymentSetupFeaturesFromCDN;

@end
