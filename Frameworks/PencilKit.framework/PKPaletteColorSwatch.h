
@interface PKPaletteColorSwatch : UIView <UIPointerInteractionDelegate> {
    UIView * _colorBackgroundView;
    UIView * _colorBulletView;
    long long  _colorUserInterfaceStyle;
    UIPointerInteraction * _pointerInteraction;
    bool  _selected;
    CAShapeLayer * _selectionRingMaskLayer;
    bool  _showsSelectionHighlight;
    PKSwatchColor * _swatchColor;
}

@property (nonatomic, retain) UIView *colorBackgroundView;
@property (nonatomic, retain) UIView *colorBulletView;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPointerInteraction *pointerInteraction;
@property (nonatomic, readonly) UIColor *presentationColor;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) CAShapeLayer *selectionRingMaskLayer;
@property (nonatomic) bool showsSelectionHighlight;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKSwatchColor *swatchColor;

- (void).cxx_destruct;
- (id)_colorBulletOutlineColor;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateBackgroundView;
- (void)_updateColorBulletView;
- (void)_updateSelectionHighlight;
- (void)_updateUI;
- (id)colorBackgroundView;
- (id)colorBulletView;
- (long long)colorUserInterfaceStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)newColorBackgroundView;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)presentationColor;
- (id)selectionRingMaskLayer;
- (void)setColorBackgroundView:(id)arg1;
- (void)setColorBulletView:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setPointerInteraction:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionRingMaskLayer:(id)arg1;
- (void)setShowsSelectionHighlight:(bool)arg1;
- (void)setSwatchColor:(id)arg1;
- (bool)showsSelectionHighlight;
- (id)swatchColor;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsBackgroundViewColor;
- (bool)wantsColorBulletVisible;

@end
