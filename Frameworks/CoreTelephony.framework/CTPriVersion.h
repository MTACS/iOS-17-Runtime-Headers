
@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _majorVersion;
    NSNumber * _minorVersion;
    NSNumber * _releaseVersion;
}

@property (nonatomic, retain) NSNumber *majorVersion;
@property (nonatomic, retain) NSNumber *minorVersion;
@property (nonatomic, retain) NSNumber *releaseVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)majorVersion;
- (id)minorVersion;
- (id)releaseVersion;
- (void)setMajorVersion:(id)arg1;
- (void)setMinorVersion:(id)arg1;
- (void)setReleaseVersion:(id)arg1;

@end
