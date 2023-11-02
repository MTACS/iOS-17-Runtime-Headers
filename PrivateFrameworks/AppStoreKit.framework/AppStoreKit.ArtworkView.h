
@interface AppStoreKit.ArtworkView : AppStoreKit.RoundedCornerView {
    void artworkTintColor;
    void clipImageToBounds;
    void frameUpdatesImageSize;
    void imageSize;
    void imageView;
    void internalBackgroundColor;
    void isCornerRadiusInvalid;
    void isStyleInvalid;
    void placeholderColor;
    void setImageDisablesAnimations;
    void shadow;
    void shadowView;
    void shouldSymbolImageSelfSize;
    void style;
    void updatingFrameForSymbolSizeChange;
}

@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
