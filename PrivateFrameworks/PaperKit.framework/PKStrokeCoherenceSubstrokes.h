
@interface PKStrokeCoherenceSubstrokes : PKStrokeCoherenceBase {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  substrokes;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _bounds;
@property (nonatomic) struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; } _flags;
@property (nonatomic) bool _hidden;
@property (nonatomic, retain) PKStrokeMask *_strokeMask;
@property (nonatomic, copy) NSUUID *_strokeUUID;
@property (nonatomic, readonly) bool hasSubstrokes;
@property (nonatomic, copy) PKInk *ink;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bounds;
- (struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })_flags;
- (bool)_isHidden;
- (long long)_pointsCount;
- (void)_setFlags:(struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setStrokeMask:(id)arg1;
- (void)_setStrokeUUID:(id)arg1;
- (id)_strokeMask;
- (id)_strokeUUID;
- (id)_substrokesInDrawing:(id)arg1;
- (id)descriptionAtDepth:(long long)arg1;
- (bool)hasSubstrokes;
- (id)init;
- (id)ink;
- (void)setInk:(id)arg1;
- (void)set_bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
