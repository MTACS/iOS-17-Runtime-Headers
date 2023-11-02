
@interface SRDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _buildVersion;
    long long  _deviceEnclosureMaterial;
    NSString * _deviceIdentifier;
    NSString * _internalProductType;
    NSString * _model;
    NSString * _name;
    NSString * _systemName;
    NSString * _systemVersion;
}

@property (copy) NSString *buildVersion;
@property long long deviceEnclosureMaterial;
@property (copy) NSString *deviceIdentifier;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *productType;
@property (readonly, copy) NSString *systemName;
@property (readonly, copy) NSString *systemVersion;

+ (id)currentDevice;
+ (bool)supportsSecureCoding;

- (id)_productType;
- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)deviceEnclosureMaterial;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceDetails:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)model;
- (id)name;
- (id)productType;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceEnclosureMaterial:(long long)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (id)sr_dictionaryRepresentation;
- (id)systemName;
- (id)systemVersion;

@end
