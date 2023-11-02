
@interface ICNoteEditorToolbarPlusView : UIView {
    bool  _closeState;
    CAGradientLayer * _gradientLayer;
    UIView * _gradientView;
    UIView * _plainView;
    UIView * _plusView;
}

@property (nonatomic) bool closeState;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;
@property (nonatomic, retain) UIView *gradientView;
@property (nonatomic, readonly) UIColor *itemColor;
@property (nonatomic, retain) UIView *plainView;
@property (nonatomic, retain) UIView *plusView;

+ (id)newCircleMaskWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)backgroundColor;
- (bool)closeState;
- (id)gradientLayer;
- (id)gradientView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)itemColor;
- (id)plainView;
- (id)plusView;
- (void)setCloseState:(bool)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setPlainView:(id)arg1;
- (void)setPlusView:(id)arg1;
- (void)updateGradientLayerColors;

@end
