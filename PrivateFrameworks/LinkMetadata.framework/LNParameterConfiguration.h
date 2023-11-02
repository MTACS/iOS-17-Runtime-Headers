
@interface LNParameterConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _forcesNeedsValue;
}

@property (nonatomic) bool forcesNeedsValue;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forcesNeedsValue;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setForcesNeedsValue:(bool)arg1;

@end
