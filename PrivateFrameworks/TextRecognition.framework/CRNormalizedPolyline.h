
@interface CRNormalizedPolyline : NSObject <CRCodable, CRPolyline> {
    struct ObjectRef<const CGPath *> { 
        struct CGPath {} *mCFObject; 
    }  __pathRef;
    CRImageSpacePolyline * _denormalizedPolyline;
    struct CGSize { 
        double width; 
        double height; 
    }  _normalizationSize;
}

@property struct ObjectRef<const CGPath *> { struct CGPath {} *x1; } _pathRef;
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRImageSpacePolyline *denormalizedPolyline;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } normalizationSize;
@property (readonly) struct CGPath { }*path;
@property (readonly) unsigned long long pointCount;
@property (readonly) NSArray *pointValues;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ObjectRef<const CGPath *> { struct CGPath {} *x1; })_pathRef;
- (void)appendPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)appendPolyline:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crCodableDataRepresentation;
- (id)denormalizedPolyline;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePoints:(id /* block */)arg1;
- (id)init;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDenormalizedPolyline:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithNormalizedPointValues:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithNormalizedPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithPolyline:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })normalizationSize;
- (struct CGPath { }*)path;
- (unsigned long long)pointCount;
- (id)pointValues;
- (id)polylineByAppendingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)polylineByAppendingPolyline:(id)arg1;
- (id)rotated180;
- (void)setDenormalizedPolyline:(id)arg1;
- (void)setNormalizationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_pathRef:(struct ObjectRef<const CGPath *> { struct CGPath {} *x1; })arg1;
- (id)simplified;

@end
