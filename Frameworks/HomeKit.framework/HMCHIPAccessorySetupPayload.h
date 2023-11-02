
@interface HMCHIPAccessorySetupPayload : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSNumber * _discriminator;
    bool  _hasShortDiscriminator;
    NSNumber * _productID;
    bool  _requiresCustomFlow;
    NSString * _serialNumber;
    NSNumber * _setupCode;
    NSString * _setupPayloadString;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) HMMTRAccessorySetupPayload *chipSetupPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *discriminator;
@property (nonatomic) bool hasShortDiscriminator;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (nonatomic, copy) NSNumber *productID;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic) bool requiresCustomFlow;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly, copy) NSNumber *setupCode;
@property (nonatomic, copy) NSString *setupPayloadString;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *vendorID;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

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
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupCode:(id)arg1 discriminator:(id)arg2;
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
- (void)setVendorID:(id)arg1;
- (id)setupCode;
- (id)setupPayloadString;
- (id)shortDescription;
- (id)vendorID;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)chipSetupPayload;
- (id)initWithCHIPSetupPayload:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)chipSetupPayload;
- (id)initWithCHIPSetupPayload:(id)arg1;

@end
