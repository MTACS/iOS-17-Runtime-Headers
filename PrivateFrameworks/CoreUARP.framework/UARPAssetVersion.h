
@interface UARPAssetVersion : NSObject {
    unsigned long long  _buildVersion;
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    unsigned long long  _releaseVersion;
}

@property (readonly) unsigned long long buildVersion;
@property (readonly) bool isValid;
@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long releaseVersion;
@property (readonly) NSString *versionString;

+ (bool)supportsSecureCoding;

- (unsigned long long)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 releaseVersion:(unsigned long long)arg3 buildVersion:(unsigned long long)arg4;
- (bool)isValid;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (unsigned long long)releaseVersion;
- (id)versionString;

@end
