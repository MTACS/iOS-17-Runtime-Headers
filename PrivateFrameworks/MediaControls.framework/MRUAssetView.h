
@interface MRUAssetView : UIView <MRUVisualStylingProviderObserver> {
    MRUAsset * _asset;
    NSString * _glyphState;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    UIImageView * _imageView;
    double  _packageScale;
    MRUCAPackageView * _packageView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, retain) MRUAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double packageScale;
@property (nonatomic, retain) MRUCAPackageView *packageView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asset;
- (id)glyphState;
- (id)imageSymbolConfiguration;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)packageScale;
- (id)packageView;
- (void)setAsset:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPackageScale:(double)arg1;
- (void)setPackageView:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
