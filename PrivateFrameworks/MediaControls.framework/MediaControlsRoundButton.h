
@interface MediaControlsRoundButton : UIControl <MRUVisualStylingProviderObserver> {
    MRUAsset * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _assetSize;
    MRUAssetView * _assetView;
    long long  _axis;
    NSString * _glyphState;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    bool  _labelHidden;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) MRUAsset *asset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assetFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } assetSize;
@property (nonatomic, retain) MRUAssetView *assetView;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (getter=isLabelHidden, nonatomic) bool labelHidden;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)asset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assetFrame;
- (struct CGSize { double x1; double x2; })assetSize;
- (id)assetView;
- (long long)axis;
- (void)controlCenterApplyPrimaryContentShadow;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)glyphState;
- (id)imageSymbolConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)isLabelHidden;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAsset:(id)arg1;
- (void)setAssetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAssetView:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setLabelHidden:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (id)title;
- (id)titleLabel;
- (void)updateAssetVisualStyling;
- (void)updateContentSizeCategory;
- (void)updateLabelVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
