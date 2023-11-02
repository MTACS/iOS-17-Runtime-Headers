
@interface PKAccountFeatureDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _fundingSourceTermsIdentifier;
    NSString * _identifier;
    NSDecimalNumber * _maximumAmount;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantIdentifier;
    NSDecimalNumber * _minimumAmount;
    PKOSVersionRequirementRange * _osVersionRange;
    NSArray * _supportedNetworks;
}

@property (nonatomic, copy) NSString *fundingSourceTermsIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDecimalNumber *maximumAmount;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSDecimalNumber *minimumAmount;
@property (nonatomic, retain) PKOSVersionRequirementRange *osVersionRange;
@property (nonatomic, copy) NSArray *supportedNetworks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingSourceTermsIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountFeatureDescriptor:(id)arg1;
- (id)maximumAmount;
- (unsigned long long)merchantCapabilities;
- (id)merchantIdentifier;
- (id)minimumAmount;
- (id)osVersionRange;
- (void)setFundingSourceTermsIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumAmount:(id)arg1;
- (void)setMerchantCapabilities:(unsigned long long)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMinimumAmount:(id)arg1;
- (void)setOsVersionRange:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (id)supportedNetworks;

@end
