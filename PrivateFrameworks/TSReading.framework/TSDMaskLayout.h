
@interface TSDMaskLayout : TSDLayout {
    struct CGPath { } * mCachedPath;
    struct CGPath { } * mCachedPathNoScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedTightPathBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedTightPathBoundsNoScale;
    TSDInfoGeometry * mDynamicInfoGeometry;
    TSDPathSource * mDynamicPathSource;
    struct { 
        unsigned int path : 1; 
        unsigned int tightPathBounds : 1; 
    }  mMaskInvalidFlags;
    double  mPathScale;
    TSDPathSource * mPathSourceWithProvidedSize;
    bool  mScalingInMaskMode;
}

@property (nonatomic, readonly) bool hasSmartPath;
@property (nonatomic, readonly) TSDImageLayout *imageLayout;
@property (nonatomic) double pathScale;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformForTightPathBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (void)beginDynamicOperation;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentLayouts;
- (void)dragBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)dynamicMovePathKnobDidBegin;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { double x1; double x2; })arg1 withTracker:(id)arg2;
- (void)endDynamicOperation;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (bool)hasSmartPath;
- (id)imageLayout;
- (id)infoGeometry;
- (id)initWithInfo:(id)arg1;
- (void)invalidate;
- (void)invalidatePath;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)maskInfo;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (unsigned long long)numberOfControlKnobs;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })originalTransformForProvidingGuides;
- (struct CGPath { }*)p_cachedPath;
- (struct CGPath { }*)p_cachedPathNoScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cachedTightPathBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cachedTightPathBoundsNoScale;
- (void)p_calculateCachedPathIfNecessary;
- (void)p_calculateTightPathBoundsIfNecessary;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGPath { }*)path;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBounds;
- (double)pathScale;
- (id)pathSource;
- (void)processChangedProperty:(int)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 asChild:(bool)arg2;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setPathScale:(double)arg1;
- (bool)shouldDisplayGuides;
- (bool)shouldSnapWhileResizing;
- (void)takeScaledMaskGeometry:(id)arg1;

@end
