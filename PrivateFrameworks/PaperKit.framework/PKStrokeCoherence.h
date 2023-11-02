
@interface PKStrokeCoherence : PKStrokeCoherenceBase {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _path;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inheritedProperties;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  resolvedProperties;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _bounds;
@property (nonatomic, retain) _PKStrokeClipPlane *_clipPlane;
@property (nonatomic) struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; } _flags;
@property (nonatomic, copy) NSUUID *_groupID;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } _inkTransform;
@property (nonatomic, copy) NSUUID *_renderGroupID;
@property (nonatomic) long long _shapeType;
@property (nonatomic, retain) PKStrokeMask *_strokeMask;
@property (nonatomic, copy) NSUUID *_strokeUUID;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } _transform;
@property (nonatomic, readonly) bool hasSubstrokes;
@property (nonatomic, copy) PKInk *ink;
@property (nonatomic, copy) PKStrokePath *path;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderBounds;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bounds;
- (id)_clipPlane;
- (struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })_flags;
- (id)_groupID;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_inkTransform;
- (id)_renderGroupID;
- (void)_setClipPlane:(id)arg1;
- (void)_setFlags:(struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1;
- (void)_setGroupID:(id)arg1;
- (void)_setRenderGroupID:(id)arg1;
- (void)_setShapeType:(long long)arg1;
- (void)_setStrokeMask:(id)arg1;
- (void)_setStrokeUUID:(id)arg1;
- (void)_setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (long long)_shapeType;
- (id)_strokeMask;
- (id)_strokeUUID;
- (id)_substrokesInDrawing:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transform;
- (long long)compareToStroke:(id)arg1;
- (id)copyForMutation;
- (id)copyForSubstroke;
- (bool)hasSubstrokes;
- (id)init;
- (id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 mask:(id)arg4;
- (id)ink;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(void*)arg1;
- (id)parentStrokeForInsertionInDrawing:(id)arg1;
- (id)path;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBounds;
- (void)setInk:(id)arg1;
- (void)setPath:(id)arg1;
- (void)set_bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)sliceIdentifierForTStart:(double)arg1 tEnd:(double)arg2;

@end
