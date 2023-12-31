
@interface TSWPRuleOffset : NSObject <NSCopying> {
    double  _dX;
    double  _dY;
}

@property (nonatomic, readonly) double dX;
@property (nonatomic, readonly) double dY;

+ (id)ruleOffset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dX;
- (double)dY;
- (id)description;
- (id)init;
- (id)initWithDX:(double)arg1 dY:(double)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointValue;
- (struct CGSize { double x1; double x2; })sizeValue;

@end
