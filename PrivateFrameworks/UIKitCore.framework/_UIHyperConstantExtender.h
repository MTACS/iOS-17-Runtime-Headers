
@interface _UIHyperConstantExtender : NSObject <NSCopying, NSSecureCoding, _UIHyperExtender, _UIHyperExtender_Internal> {
    unsigned long long  __dimensions;
    double  __maximumDistance;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setMaximumDistance:, nonatomic) double _maximumDistance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (unsigned long long)_dimensions;
- (void)_getExtentVector:(double*)arg1 forUnconstrainedPoint:(const double*)arg2 closestPoint:(const double*)arg3;
- (double)_maximumDistance;
- (void)_setMaximumDistance:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
