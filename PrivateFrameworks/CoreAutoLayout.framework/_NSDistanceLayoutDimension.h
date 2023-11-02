
@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {
    NSLayoutAnchor * _minuend;
    NSLayoutAnchor * _subtrahend;
}

@property (readonly) NSArray *_childAnchors;

+ (id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2;

- (id)_childAnchors;
- (id)_expressionInContext:(struct { long long x1; id x2; id x3; })arg1;
- (double)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinuend:(id)arg1 subtrahend:(id)arg2;

@end
