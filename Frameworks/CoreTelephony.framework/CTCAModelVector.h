
@interface CTCAModelVector : NSObject <NSCopying, NSSecureCoding> {
    CTCATargetVector * _defaultVector;
}

@property (nonatomic, retain) CTCATargetVector *defaultVector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultVector;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultVector:(id)arg1;

@end
