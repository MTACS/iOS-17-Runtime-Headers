
@interface PKPassProvisioningMetadata : NSObject <NSSecureCoding> {
    NSString * _localizedSourceDeviceDescription;
    unsigned long long  _sourceDeviceType;
}

@property (nonatomic, retain) NSString *localizedSourceDeviceDescription;
@property (nonatomic) unsigned long long sourceDeviceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedSourceDeviceDescription;
- (void)setLocalizedSourceDeviceDescription:(id)arg1;
- (void)setSourceDeviceType:(unsigned long long)arg1;
- (unsigned long long)sourceDeviceType;

@end
