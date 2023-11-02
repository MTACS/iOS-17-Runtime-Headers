
@interface HMMTRAccessorySetupPayload : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSNumber * _discriminator;
    bool  _hasShortDiscriminator;
    NSNumber * _productID;
    bool  _requiresCustomFlow;
    NSString * _serialNumber;
    NSNumber * _setupCode;
    NSString * _setupPayloadString;
    bool  _supportsBLE;
    bool  _supportsIP;
    bool  _supportsSoftAP;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly, copy) NSNumber *discriminator;
@property (nonatomic) bool hasShortDiscriminator;
@property (nonatomic, copy) NSNumber *productID;
@property (nonatomic) bool requiresCustomFlow;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) NSNumber *setupCode;
@property (nonatomic, readonly, copy) NSString *setupID;
@property (nonatomic, copy) NSString *setupPayloadString;
@property (nonatomic) bool supportsBLE;
@property (nonatomic) bool supportsIP;
@property (nonatomic) bool supportsSoftAP;
@property (nonatomic, copy) NSNumber *vendorID;

+ (bool)isValidSetupPayloadURLScheme:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discriminator;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasShortDiscriminator;
- (unsigned long long)hash;
- (id)initWithCHIPSetupPayload:(id)arg1;
- (id)initWithCHIPSetupPayload:(id)arg1 setupPayloadString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupCode:(id)arg1 discriminator:(id)arg2;
- (id)initWithSetupCode:(id)arg1 discriminator:(id)arg2 isShortDiscriminator:(bool)arg3;
- (id)initWithSetupCodeString:(id)arg1;
- (id)initWithSetupPayloadString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (id)productID;
- (bool)requiresCustomFlow;
- (id)serialNumber;
- (void)setHasShortDiscriminator:(bool)arg1;
- (void)setProductID:(id)arg1;
- (void)setRequiresCustomFlow:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSetupPayloadString:(id)arg1;
- (void)setSupportsBLE:(bool)arg1;
- (void)setSupportsIP:(bool)arg1;
- (void)setSupportsSoftAP:(bool)arg1;
- (void)setVendorID:(id)arg1;
- (id)setupCode;
- (id)setupID;
- (id)setupPayloadString;
- (id)shortDescription;
- (bool)supportsBLE;
- (bool)supportsIP;
- (bool)supportsSoftAP;
- (id)vendorID;

@end
