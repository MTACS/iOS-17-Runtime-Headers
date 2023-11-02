
@interface PIPhotoEditAdjustmentsVersion : NSObject {
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    NSString * _platform;
    unsigned long long  _subMinorVersion;
}

@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;
@property (nonatomic, readonly, copy) NSString *platform;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) unsigned long long subMinorVersion;

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4;

- (void).cxx_destruct;
- (long long)asOrderedInteger;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustmentVersion:(id)arg1;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (id)platform;
- (id)string;
- (unsigned long long)subMinorVersion;

@end
