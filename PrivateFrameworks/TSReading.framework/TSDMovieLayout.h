
@interface TSDMovieLayout : TSDMediaLayout {
    TSDInfoGeometry * mDynamicInfoGeometry;
}

- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeAlignmentFrameInRoot:(bool)arg1;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (void)endDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullReflectionBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullReflectionFrame;
- (id)i_computeWrapPath;
- (id)initWithInfo:(id)arg1;
- (id)layoutGeometryFromInfo;
- (id)movieInfo;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)processChangedProperty:(int)arg1;
- (bool)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;

@end
