
@interface PUPhotoEditNotchButton : UIButton {
    UIColor * _backgroundColor;
    MTMaterialView * _backgroundView;
    PUPhotoEditButtonMaterialView * _materialView;
    NSString * _notchButtonTitle;
    long long  _notchButtonType;
    NSString * _symbolName;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic, readonly) UIImage *defaultContentImage;
@property (nonatomic, readonly) PUPhotoEditButtonMaterialView *materialView;
@property (nonatomic, retain) NSString *notchButtonTitle;
@property (nonatomic) long long notchButtonType;
@property (nonatomic, retain) NSString *symbolName;

- (void).cxx_destruct;
- (void)_didInvalidateContentImageMetrics;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateContentImage;
- (id)backgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)backgroundView;
- (id)defaultContentImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialView;
- (id)notchButtonTitle;
- (long long)notchButtonType;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNotchButtonTitle:(id)arg1;
- (void)setNotchButtonType:(long long)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
