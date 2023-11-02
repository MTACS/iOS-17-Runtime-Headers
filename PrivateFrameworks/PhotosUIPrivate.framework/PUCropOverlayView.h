
@interface PUCropOverlayView : UIView {
    PUCropMaskView * _bottomMask;
    bool  _cropGridVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRectInLocalCoordinateSpace;
    UIView * _cropWindowView;
    PUCropMaskView * _leftMask;
    NSArray * _maskViews;
    bool  _maskedContentVisible;
    NSArray * _oneNinthCropLines;
    NSArray * _oneThirdCropLines;
    PUCropMaskView * _rightMask;
    bool  _straightenGridVisible;
    PUCropMaskView * _topMask;
}

@property (nonatomic, retain) PUCropMaskView *bottomMask;
@property (getter=isCropGridVisible, nonatomic) bool cropGridVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRectInLocalCoordinateSpace;
@property (nonatomic, retain) UIView *cropWindowView;
@property (nonatomic, readonly) UIView *layoutReferenceItem;
@property (nonatomic, retain) PUCropMaskView *leftMask;
@property (nonatomic, retain) NSArray *maskViews;
@property (getter=isMaskedContentVisible, nonatomic) bool maskedContentVisible;
@property (nonatomic, retain) NSArray *oneNinthCropLines;
@property (nonatomic, retain) NSArray *oneThirdCropLines;
@property (nonatomic, retain) PUCropMaskView *rightMask;
@property (getter=isStraightenGridVisible, nonatomic) bool straightenGridVisible;
@property (nonatomic, retain) PUCropMaskView *topMask;

- (void).cxx_destruct;
- (id)_addLinesSpacedForCount:(unsigned long long)arg1 drawFirstAndLast:(bool)arg2 visible:(bool)arg3;
- (id)_createConstraintsForLine:(id)arg1 centerMultiplier:(double)arg2 vertical:(bool)arg3;
- (id)_createLineViewForCount:(unsigned long long)arg1;
- (id)_createMaskView;
- (void)_setGridViews:(id)arg1 visible:(bool)arg2 iVarVisibilePtr:(bool*)arg3 animated:(bool)arg4;
- (unsigned long long)_subviewIndexForLineForCount:(unsigned long long)arg1;
- (void)_updateCropRectInLocalCoordinateSpace;
- (id)bottomMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectInLocalCoordinateSpace;
- (id)cropWindowView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCropGridVisible;
- (bool)isMaskedContentVisible;
- (bool)isStraightenGridVisible;
- (id)layoutReferenceItem;
- (void)layoutSubviews;
- (id)leftMask;
- (id)maskViews;
- (id)oneNinthCropLines;
- (id)oneThirdCropLines;
- (id)rightMask;
- (void)setBottomMask:(id)arg1;
- (void)setCropGridVisible:(bool)arg1;
- (void)setCropGridVisible:(bool)arg1 animated:(bool)arg2;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRectInLocalCoordinateSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropWindowView:(id)arg1;
- (void)setLeftMask:(id)arg1;
- (void)setMaskViews:(id)arg1;
- (void)setMaskedContentVisible:(bool)arg1;
- (void)setMaskedContentVisible:(bool)arg1 animated:(bool)arg2;
- (void)setOneNinthCropLines:(id)arg1;
- (void)setOneThirdCropLines:(id)arg1;
- (void)setRightMask:(id)arg1;
- (void)setStraightenGridVisible:(bool)arg1;
- (void)setStraightenGridVisible:(bool)arg1 animated:(bool)arg2;
- (void)setTopMask:(id)arg1;
- (id)topMask;

@end
