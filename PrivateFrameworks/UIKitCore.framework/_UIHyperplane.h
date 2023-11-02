
@interface _UIHyperplane : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    double * __normal;
    double * __point;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) const double*_normal;
@property (nonatomic, readonly) const double*_point;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (void)_mutateNormal:(id /* block */)arg1;
- (void)_mutatePoint:(id /* block */)arg1;
- (const double*)_normal;
- (const double*)_point;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
