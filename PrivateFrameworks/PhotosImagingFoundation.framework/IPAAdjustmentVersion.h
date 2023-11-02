
@interface IPAAdjustmentVersion : NSObject {
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    NSString * _platform;
}

@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;
@property (nonatomic, readonly) NSString *platform;

+ (void)initialize;
+ (id)validatePlatformString:(id)arg1;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
+ (id)versionFromArchivalRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)archivalRepresentation;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustmentVersion:(id)arg1;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (id)platform;
- (void)setMinorVersion:(unsigned long long)arg1;

@end
