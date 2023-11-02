
@interface SBSDisplayModeSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _overscanCompensation;
    unsigned long long  _scale;
}

@property (nonatomic, readonly) long long overscanCompensation;
@property (nonatomic, readonly) unsigned long long scale;

+ (id)fromDefaultsRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultsRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScale:(unsigned long long)arg1 overscanCompensation:(long long)arg2;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)overscanCompensation;
- (unsigned long long)scale;

@end
