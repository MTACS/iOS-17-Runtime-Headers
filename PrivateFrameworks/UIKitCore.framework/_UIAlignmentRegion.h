
@interface _UIAlignmentRegion : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    double  __maximumDistance;
    <_UIHyperregion> * __region;
    double * __temp;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setMaximumDistance:, nonatomic) double _maximumDistance;
@property (setter=_setRegion:, nonatomic, retain) <_UIHyperregion> *_region;
@property (nonatomic, readonly) double*_temp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (bool)_isAlignedForClosestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (bool)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2;
- (double)_maximumDistance;
- (id)_region;
- (void)_setMaximumDistance:(double)arg1;
- (void)_setRegion:(id)arg1;
- (double*)_temp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
