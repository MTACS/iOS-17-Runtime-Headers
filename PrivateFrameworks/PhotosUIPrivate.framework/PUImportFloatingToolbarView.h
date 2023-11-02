
@interface PUImportFloatingToolbarView : UIView {
    NSString * _backdropViewGroupName;
    UIView * _shadowView;
    bool  _shouldBlurBackground;
    UIToolbar * _toolbar;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) UIView *shadowView;
@property (nonatomic) bool shouldBlurBackground;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (id)backdropViewGroupName;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)items;
- (void)layoutSubviews;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setShadowView:(id)arg1;
- (void)setShouldBlurBackground:(bool)arg1;
- (void)setToolbar:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)shadowView;
- (bool)shouldBlurBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)toolbar;
- (id)visualEffectView;

@end
