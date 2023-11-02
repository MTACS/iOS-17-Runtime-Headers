
@interface CAMCreativeCameraButton : UIButton {
    UIImageView * __circleBackgroundView;
    bool  __overContent;
    long long  _layoutStyle;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    bool  _useCompactLayout;
}

@property (nonatomic, retain) UIImageView *_circleBackgroundView;
@property (getter=_isOverContent, nonatomic, readonly) bool _overContent;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (setter=useCompactLayout:, nonatomic) bool useCompactLayout;

- (void).cxx_destruct;
- (id)_circleBackgroundView;
- (void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1 overContent:(bool)arg2;
- (bool)_isOverContent;
- (void)_updateImages;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initForOverContent;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isActive;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_circleBackgroundView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (bool)useCompactLayout;
- (void)useCompactLayout:(bool)arg1;

@end
