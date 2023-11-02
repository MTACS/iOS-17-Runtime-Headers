
@interface _UIHypersphere : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    double * __center;
    unsigned long long  __dimensions;
    double  __radius;
}

@property (nonatomic, readonly) const double*_center;
@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setRadius:, nonatomic) double _radius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (const double*)_center;
- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (void)_mutateCenter:(id /* block */)arg1;
- (double)_radius;
- (void)_setRadius:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
