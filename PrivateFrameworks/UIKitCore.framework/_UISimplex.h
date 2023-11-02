
@interface _UISimplex : NSObject <NSCopying, NSSecureCoding, _UIHyperregion_Internal> {
    double * __cggetriWorkspace;
    int  __cggetriWorkspaceSize;
    unsigned long long  __dimensions;
    double * __facetNormalOffsets;
    double * __facetNormals;
    NSArray * __facets;
    double * __incenter;
    unsigned long long  __missingNormalCount;
    double * __missingNormals;
    unsigned long long  __pointCount;
    double * __points;
    double * __projection;
    double * __temp;
    struct { 
        unsigned int metadata : 1; 
    }  _clean;
}

@property (nonatomic, readonly) double*_cggetriWorkspace;
@property (nonatomic, readonly) int _cggetriWorkspaceSize;
@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) double*_facetNormalOffsets;
@property (nonatomic, readonly) double*_facetNormals;
@property (nonatomic, readonly) NSArray *_facets;
@property (nonatomic, readonly) double*_incenter;
@property (nonatomic, readonly) unsigned long long _missingNormalCount;
@property (nonatomic, readonly) double*_missingNormals;
@property (nonatomic, readonly) unsigned long long _pointCount;
@property (nonatomic, readonly) const double*_points;
@property (nonatomic, readonly) double*_projection;
@property (nonatomic, readonly) double*_temp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double*)_cggetriWorkspace;
- (int)_cggetriWorkspaceSize;
- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (double*)_facetNormalOffsets;
- (double*)_facetNormals;
- (id)_facets;
- (double*)_incenter;
- (unsigned long long)_missingNormalCount;
- (double*)_missingNormals;
- (void)_mutatePoints:(id /* block */)arg1;
- (unsigned long long)_pointCount;
- (const double*)_points;
- (double*)_projection;
- (void)_recomputeMetadata;
- (double*)_temp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1 pointCount:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
