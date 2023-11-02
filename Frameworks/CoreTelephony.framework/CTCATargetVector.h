
@interface CTCATargetVector : NSObject <NSCopying, NSSecureCoding> {
    CTCATargetVectorAxis * _x;
    CTCATargetVectorAxis * _y;
}

@property (nonatomic, retain) CTCATargetVectorAxis *x;
@property (nonatomic, retain) CTCATargetVectorAxis *y;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setX:(id)arg1;
- (void)setY:(id)arg1;
- (id)x;
- (id)y;

@end
