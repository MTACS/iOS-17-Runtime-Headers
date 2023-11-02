
@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator {
    UIImageView * __borderImageView;
    UILabel * __framerateLabel;
    UIView * __framerateLabelSnapshot;
    struct CGSize { 
        double width; 
        double height; 
    }  __framerateSize;
    UILabel * __resolutionLabel;
    UIView * __resolutionLabelSnapshot;
    struct CGSize { 
        double width; 
        double height; 
    }  __resolutionSize;
    UILabel * __separatorLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  __separatorSize;
    long long  _framerate;
    long long  _layoutStyle;
    long long  _resolution;
    <CAMVideoConfigurationStatusIndicatorDelegate> * _touchDelegate;
}

@property (nonatomic, readonly) UIImageView *_borderImageView;
@property (nonatomic, readonly) UILabel *_framerateLabel;
@property (nonatomic) UIView *_framerateLabelSnapshot;
@property (nonatomic) struct CGSize { double x1; double x2; } _framerateSize;
@property (nonatomic, readonly) UILabel *_resolutionLabel;
@property (nonatomic) UIView *_resolutionLabelSnapshot;
@property (nonatomic) struct CGSize { double x1; double x2; } _resolutionSize;
@property (nonatomic, readonly) UILabel *_separatorLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } _separatorSize;
@property (nonatomic) long long framerate;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long resolution;
@property (nonatomic) <CAMVideoConfigurationStatusIndicatorDelegate> *touchDelegate;

- (void).cxx_destruct;
- (id)_borderImageView;
- (id)_framerateLabel;
- (id)_framerateLabelSnapshot;
- (struct CGSize { double x1; double x2; })_framerateSize;
- (id)_framerateString;
- (void)_handleTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })_labelGeometryForSize:(struct CGSize { double x1; double x2; })arg1 originX:(double)arg2 originY:(double)arg3;
- (double)_minTextWidth;
- (id)_resolutionLabel;
- (id)_resolutionLabelSnapshot;
- (struct CGSize { double x1; double x2; })_resolutionSize;
- (id)_resolutionString;
- (id)_separatorLabel;
- (struct CGSize { double x1; double x2; })_separatorSize;
- (id)_separatorString;
- (struct CGSize { double x1; double x2; })_sizingForLabel:(id)arg1 minWidth:(double)arg2 spacing:(double)arg3;
- (bool)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_togglesResolutionOrFramerateForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateAppearanceAnimated:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (long long)framerate;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageNameForCurrentState;
- (id)init;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)resolution;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setFramerate:(long long)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setResolution:(long long)arg1;
- (void)setResolution:(long long)arg1 framerate:(long long)arg2 animated:(bool)arg3;
- (void)setTouchDelegate:(id)arg1;
- (void)set_framerateLabelSnapshot:(id)arg1;
- (void)set_framerateSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_resolutionLabelSnapshot:(id)arg1;
- (void)set_resolutionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_separatorSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldUseOutline;
- (id)touchDelegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
