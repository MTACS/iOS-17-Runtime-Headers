
@interface HKDeviceContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currentOSName;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _currentOSVersion;
    NSDate * _modificationDate;
    NSString * _productTypeName;
    bool  _representsLocalDevice;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *currentOSName;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } currentOSVersion;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *productTypeName;
@property (nonatomic, readonly) bool representsLocalDevice;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentOSName;
- (struct { long long x1; long long x2; long long x3; })currentOSVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 localDevice:(bool)arg2 productTypeName:(id)arg3 currentOSName:(id)arg4 currentOSVersion:(struct { long long x1; long long x2; long long x3; })arg5 modificationDate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (id)productTypeName;
- (bool)representsLocalDevice;
- (long long)type;

@end
