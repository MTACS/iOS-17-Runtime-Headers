
@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider> {
    UIImageView * __circleBackgroundView;
    UIImageView * __imageView;
    bool  __useCTMAppearance;
    long long  _layoutStyle;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, retain) UIImageView *_circleBackgroundView;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, readonly) bool _useCTMAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (id)flipButtonOverContent;
+ (id)flipButtonWithLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_circleBackgroundView;
- (void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1 overContent:(bool)arg2;
- (id)_imageView;
- (void)_updateImages;
- (bool)_useCTMAppearance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)imageForAccessibilityHUD;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)mainImageNameForAccessibilityHUD:(bool)arg1;
- (long long)orientation;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_circleBackgroundView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
