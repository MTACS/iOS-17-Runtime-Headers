
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {
    UIVisualEffectView * _backdropView;
    UILabel * _emojiSectionHeader;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
}

@property (nonatomic, copy) UIVisualEffect *effect;
@property (nonatomic) double headerFontSize;
@property (nonatomic, copy) NSString *headerName;
@property (nonatomic) double headerOpacity;
@property (nonatomic, copy) UIColor *headerTextColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) bool useVibrantBlend;

- (void).cxx_destruct;
- (id)effect;
- (double)headerFontSize;
- (id)headerName;
- (double)headerOpacity;
- (id)headerTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)layoutSubviews;
- (void)setEffect:(id)arg1;
- (void)setHeaderFontSize:(double)arg1;
- (void)setHeaderName:(id)arg1;
- (void)setHeaderOpacity:(double)arg1;
- (void)setHeaderTextColor:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseVibrantBlend:(bool)arg1;
- (bool)useVibrantBlend;

@end
