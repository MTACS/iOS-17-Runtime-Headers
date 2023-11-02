
@interface PKOSVersionRequirement : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appletv;
    NSString * _ipad;
    NSString * _iphone;
    NSString * _ipod;
    NSString * _mac;
    NSString * _specifiediphone;
    NSString * _vision;
    NSString * _watch;
}

@property (nonatomic, readonly) NSString *appletv;
@property (nonatomic, readonly) NSString *ipad;
@property (nonatomic, readonly) NSString *iphone;
@property (nonatomic, readonly) NSString *ipod;
@property (nonatomic, readonly) NSString *mac;
@property (nonatomic, readonly) NSString *specifiediphone;
@property (nonatomic, readonly) NSString *vision;
@property (nonatomic, readonly) NSString *watch;

+ (id)fromDeviceVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appletv;
- (id)asDictionary;
- (long long)compare:(id)arg1 deviceClass:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)ipad;
- (id)iphone;
- (id)ipod;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOSVersionRequirement:(id)arg1;
- (id)mac;
- (id)specifiediphone;
- (id)versionForDeviceClass:(id)arg1;
- (id)vision;
- (id)watch;

@end
