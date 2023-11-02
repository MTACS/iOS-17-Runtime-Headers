
@interface CRImageSpacePolyline : NSObject <CRCodable, CRPolyline> {
    struct ObjectRef<const CGPath *> { 
        struct CGPath {} *mCFObject; 
    }  __pathRef;
    void * __points;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGPath { }*path;
@property (readonly) unsigned long long pointCount;
@property (readonly) NSArray *pointValues;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crCodableDataRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePoints:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })estimatedLineSizeForPairedPointPolygon;
- (id)init;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointValues:(id)arg1;
- (id)initWithPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (id)initWithPolyline:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)path;
- (unsigned long long)pointCount;
- (id)pointValues;
- (id)polylineByAppendingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)polylineByAppendingPolyline:(id)arg1;
- (id)rotated180;
- (id)simplified;

@end
