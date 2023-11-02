
@interface TRIVersion : NSObject <NSCopying> {
    NSNumber * _majorVersion;
    NSNumber * _minorVersion;
    NSNumber * _patchVersion;
}

@property (nonatomic, readonly) NSNumber *majorVersion;
@property (nonatomic, readonly) NSNumber *minorVersion;
@property (nonatomic, readonly) NSNumber *patchVersion;

+ (id)parseVersionFromString:(id)arg1 withPrefix:(id)arg2;
+ (id)versionWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithReplacementMajorVersion:(id)arg1;
- (id)copyWithReplacementMinorVersion:(id)arg1;
- (id)copyWithReplacementPatchVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVersion:(id)arg1;
- (id)majorVersion;
- (id)minorVersion;
- (id)patchVersion;

@end
