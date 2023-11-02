
@interface NEAppInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appVersion;
    NSString * _bundleID;
    NSData * _cdHash;
    int  _pid;
    NSUUID * _uuid;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
