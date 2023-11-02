
@interface HDDeviceContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currentOSName;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _currentOSVersion;
    NSDate * _modificationDate;
    NSString * _productTypeName;
    HDSyncIdentity * _syncIdentity;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *currentOSName;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } currentOSVersion;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *productTypeName;
@property (nonatomic, readonly, copy) HDSyncIdentity *syncIdentity;
@property (nonatomic, readonly) long long type;

+ (id)localProductTypeEnumWithError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentOSName;
- (struct { long long x1; long long x2; long long x3; })currentOSVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForLocalDeviceWithType:(long long)arg1 syncIdentity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 productTypeName:(id)arg2 currentOSName:(id)arg3 currentOSVersion:(struct { long long x1; long long x2; long long x3; })arg4 modificationDate:(id)arg5 syncIdentity:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (id)productTypeName;
- (id)syncIdentity;
- (long long)type;

@end
