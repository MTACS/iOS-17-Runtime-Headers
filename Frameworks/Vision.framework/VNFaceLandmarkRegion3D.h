
@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion {
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _points;
}

@property const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 points:(/* Warning: Unrecognized filer type: '5' using 'void*' */ void**)arg3 pointCount:(unsigned long long)arg4;
- (void)pointAtIndex:(unsigned long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)setPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;

@end
