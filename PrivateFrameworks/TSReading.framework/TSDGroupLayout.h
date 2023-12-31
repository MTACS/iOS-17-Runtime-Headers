
@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBoundsForStandardKnobs;
    TSDBezierPath * mCachedExternalWrapPath;
    TSDBezierPath * mCachedWrapPath;
    TSDLayoutGeometry * mDynamicLayoutGeometry;
}

@property (nonatomic, readonly) int wrapContainerMode;

- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (bool)allowsConnections;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canFlip;
- (id)computeInfoGeometryDuringResize;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)descendentWrappables;
- (void)dragBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)endDynamicOperation;
- (id)i_computeWrapPath;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (void)invalidate;
- (void)invalidateExteriorWrap;
- (id)layoutGeometryFromInfo;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (struct CGSize { double x1; double x2; })minimumSize;
- (id)p_childWrapPathsFrom:(id)arg1;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateDescendentWrapPaths;
- (void)p_invalidateParentForWrap;
- (void)processChangedProperty:(int)arg1;
- (bool)providesGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (id)reliedOnLayouts;
- (bool)resizeMayChangeAspectRatio;
- (void)setDynamicGeometry:(id)arg1;
- (void)setGeometry:(id)arg1;
- (bool)supportsFlipping;
- (bool)supportsParentRotation;
- (bool)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (id)visibleGeometries;
- (int)wrapContainerMode;
- (void)wrappableChildInvalidated;

@end
