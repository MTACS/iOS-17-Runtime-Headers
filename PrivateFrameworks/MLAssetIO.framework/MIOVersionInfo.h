
@interface MIOVersionInfo : NSObject <NSCopying> {
    long long  _majorVersion;
    long long  _minorVersion;
    long long  _patchVersion;
}

@property (nonatomic, readonly) long long majorVersion;
@property (nonatomic, readonly) long long minorVersion;
@property (nonatomic, readonly) long long patchVersion;
@property (nonatomic, readonly) NSString *versionNumberString;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)majorVersion;
- (long long)minorVersion;
- (long long)patchVersion;
- (id)versionNumberString;

@end
