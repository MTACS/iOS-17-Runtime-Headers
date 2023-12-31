
@interface TSDMediaLayout : TSDStyledLayout {
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedAlignmentFrame;
    TSDMutableStroke * mDynamicStroke;
    struct { 
        unsigned int alignmentFrame : 1; 
    }  mMediaInvalidFlags;
    bool  mShouldRenderFrameStroke;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsForStandardKnobs;
@property (nonatomic) bool shouldRenderFrameStroke;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeAlignmentFrameInRoot:(bool)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (id)initWithInfo:(id)arg1;
- (void)invalidateAlignmentFrame;
- (bool)isStrokeBeingManipulated;
- (id)mediaInfo;
- (void)processChangedProperty:(int)arg1;
- (void)setBoundsForStandardKnobs:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (void)setShouldRenderFrameStroke:(bool)arg1;
- (bool)shouldRenderFrameStroke;
- (id)stroke;
- (bool)supportsRotation;

@end
