
@interface TUIEmojiVariantSelectorView : UIView {
    NSArray * _allVariants;
    NSArray * _arrangedVariantCells;
    UIView * _backdropView;
    TUIDrawingView * _backgroundMaskView;
    EMFEmojiToken * _baseEmojiToken;
    TUIDrawingView * _borderView;
    UIView * _deepShadowView;
    <TUIEmojiVariantSelectorViewDelegate> * _delegate;
    UIView * _keyShadowView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originRect;
    EMFEmojiToken * _selectedVariant;
    UIView * _separatorView;
    UIView * _variantCellContainerView;
}

@property (nonatomic, readonly) NSArray *allVariants;
@property (nonatomic, retain) NSArray *arrangedVariantCells;
@property (nonatomic, retain) UIView *backdropView;
@property (nonatomic, retain) TUIDrawingView *backgroundMaskView;
@property (nonatomic, retain) EMFEmojiToken *baseEmojiToken;
@property (nonatomic, retain) TUIDrawingView *borderView;
@property (nonatomic, retain) UIView *deepShadowView;
@property (nonatomic) <TUIEmojiVariantSelectorViewDelegate> *delegate;
@property (nonatomic, retain) UIView *keyShadowView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originRect;
@property (nonatomic, readonly) EMFEmojiToken *selectedVariant;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, readonly) UIView *variantCellContainerView;

+ (id)emojiTextAttributes;

- (void).cxx_destruct;
- (id)_backgroundBezierPathForContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })_emojiCellSize;
- (bool)_highlightCellAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_numberOfVariants;
- (void)_unhighlightAllViews;
- (id)_variantCellAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)allVariants;
- (id)arrangedVariantCells;
- (id)backdropView;
- (id)backgroundMaskView;
- (id)baseEmojiToken;
- (id)borderView;
- (id)deepShadowView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 emojiToken:(id)arg2 originRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)keyShadowView;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originRect;
- (id)selectedVariant;
- (id)separatorView;
- (void)setArrangedVariantCells:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBackgroundMaskView:(id)arg1;
- (void)setBaseEmojiToken:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void)setDeepShadowView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyShadowView:(id)arg1;
- (void)setOriginRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)variantCellContainerView;

@end
