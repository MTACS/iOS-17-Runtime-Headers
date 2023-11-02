
@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding> {
    float  _aspectRatio;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _contourPoints;
    NSIndexPath * _indexPath;
    struct CGPath { } * _normalizedPath;
    VNContoursObservation * _observation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pathLock;
    unsigned long long  _topLevelIndex;
}

@property (readonly) float aspectRatio;
@property (readonly) long long childContourCount;
@property (readonly) NSArray *childContours;
@property (readonly) NSIndexPath *indexPath;
@property (readonly) struct CGPath { }*normalizedPath;
@property (readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**normalizedPoints;
@property (readonly) long long pointCount;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (readonly) unsigned long long topLevelIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)aspectRatio;
- (float)aspectRatioInOrientation:(unsigned int)arg1;
- (id)childContourAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (long long)childContourCount;
- (id)childContours;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (unsigned long long)hash;
- (id)indexPath;
- (id)initWithPoints:(const void*)arg1 topLevelIndex:(unsigned long long)arg2 indexPath:(id)arg3 aspectRatio:(float)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)normalizedPath;
- (struct CGPath { }*)normalizedPathInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normalizedPoints;
- (const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)normalizedPointsInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (long long)pointCount;
- (id)polygonApproximationWithEpsilon:(float)arg1 error:(id*)arg2;
- (unsigned long long)requestRevision;
- (unsigned long long)topLevelIndex;

@end
