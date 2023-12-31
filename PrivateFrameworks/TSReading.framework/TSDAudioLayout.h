
@interface TSDAudioLayout : TSDMediaLayout

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (bool)allowsConnections;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canFlip;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeAlignmentFrameInRoot:(bool)arg1;
- (id)initWithInfo:(id)arg1;
- (id)layoutGeometryFromInfo;
- (id)movieInfo;
- (bool)resizeMayChangeAspectRatio;
- (bool)shouldDisplayGuides;
- (bool)supportsRotation;
- (int)wrapType;

@end
