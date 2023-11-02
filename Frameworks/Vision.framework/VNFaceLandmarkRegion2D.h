
@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _points;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pointsCalculatorLock;
    long long  _pointsClassification;
    NSArray * _precisionEstimatesPerPoint;
    NSMutableDictionary * _sizedPointsCache;
}

@property (readonly) const struct CGPoint { double x1; double x2; }*normalizedPoints;
@property (readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (nonatomic, readonly) long long pointsClassification;
@property (readonly) NSArray *precisionEstimatesPerPoint;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initLocks;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pointCount:(unsigned long long)arg3;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pointsClassification:(long long)arg3 points:(/* Warning: Unrecognized filer type: '6' using 'void*' */ void**)arg4 pointCount:(unsigned long long)arg5 precisionEstimatesPerPoint:(id)arg6;
- (bool)isEqual:(id)arg1;
- (const struct CGPoint { double x1; double x2; }*)normalizedPoints;
- (const struct CGPoint { double x1; double x2; }*)normalizedPointsInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (void)pointAtIndex:(unsigned long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (long long)pointsClassification;
- (const struct CGPoint { double x1; double x2; }*)pointsInImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)precisionEstimatesPerPoint;

@end
