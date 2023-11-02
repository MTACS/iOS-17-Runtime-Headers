
@interface MRUOutputDeviceAssetView : UIView <MRUVisualStylingProviderObserver> {
    MRUOutputDeviceAsset * _asset;
    MRUAssetView * _assetView;
    NSString * _glyphState;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _title;
    BSUIEmojiLabelView * _titleLabel;
}

@property (nonatomic, retain) MRUOutputDeviceAsset *asset;
@property (nonatomic, retain) MRUAssetView *assetView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) BSUIEmojiLabelView *titleLabel;

- (void).cxx_destruct;
- (id)asset;
- (id)assetView;
- (id)glyphState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAsset:(id)arg1;
- (void)setAssetView:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (id)title;
- (id)titleLabel;
- (void)updateContentSizeCategory;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
