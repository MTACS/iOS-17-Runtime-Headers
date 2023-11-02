
@interface HKFeatureAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UDIDeviceIdentifier;
    NSString * _featureVersion;
    NSString * _updateVersion;
    NSString * _yearOfRelease;
}

@property (nonatomic, readonly, copy) NSString *UDIDeviceIdentifier;
@property (nonatomic, readonly, copy) NSString *featureVersion;
@property (nonatomic, readonly, copy) NSString *updateVersion;
@property (nonatomic, readonly, copy) NSString *yearOfRelease;

+ (id)featureAttributesDerivedFromOSBuildAndFeatureVersion:(id)arg1;
+ (id)featureAttributesDerivedFromOSBuildAndFeatureVersion:(id)arg1 watchDeviceIdentifier:(id)arg2 phoneDeviceIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UDIDeviceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureVersion;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureVersion:(id)arg1 updateVersion:(id)arg2 UDIDeviceIdentifier:(id)arg3 yearOfRelease:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)updateVersion;
- (id)yearOfRelease;

@end
