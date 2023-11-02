
@interface _UIHyperAsymmetricExtender : NSObject <NSCopying, NSSecureCoding, _UIHyperExtender, _UIHyperExtender_Internal> {
    unsigned long long  __dimensions;
    double * __extentBeyondMaximum;
    double * __extentBeyondMinimum;
    double * __temp;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) const double*_extentBeyondMaximum;
@property (nonatomic, readonly) const double*_extentBeyondMinimum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (unsigned long long)_dimensions;
- (const double*)_extentBeyondMaximum;
- (const double*)_extentBeyondMinimum;
- (void)_getExtentVector:(double*)arg1 forUnconstrainedPoint:(const double*)arg2 closestPoint:(const double*)arg3;
- (void)_mutateExtentBeyondMaximum:(id /* block */)arg1;
- (void)_mutateExtentBeyondMinimum:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
