
@interface _UIHyperrepeatedRegion : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    double * __increment;
    double * __maximumIndices;
    double * __offset;
    <_UIHyperregion> * __region;
    unsigned long long * __repetitions;
    double * __temp;
    struct { 
        unsigned int maximumIndices : 1; 
    }  _clean;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) const double*_increment;
@property (nonatomic, readonly) const double*_offset;
@property (setter=_setRegion:, nonatomic, retain) <_UIHyperregion> *_region;
@property (nonatomic, readonly) const unsigned long long*_repetitions;
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
- (const double*)_increment;
- (void)_indexOfClosestSubregion:(double*)arg1 toPoint:(const double*)arg2;
- (bool)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2;
- (double*)_mutableMaximumIndices;
- (void)_mutateIncrement:(id /* block */)arg1;
- (void)_mutateOffset:(id /* block */)arg1;
- (void)_mutateRepetitions:(id /* block */)arg1;
- (const double*)_offset;
- (id)_region;
- (const unsigned long long*)_repetitions;
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
