
@interface PXContentSyndicationItemAssetPreviewView : UIView {
    bool  _highlighted;
    NSArray * _imageViews;
    NSAttributedString * _overlayTitle;
    long long  _visiblePreviewCount;
}

@property (nonatomic, readonly) PXFocusInfo *focusInfo;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) NSArray *imageViews;
@property (readonly) long long maximumPreviewCount;
@property (nonatomic, copy) NSAttributedString *overlayTitle;
@property (nonatomic, readonly, copy) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) long long visiblePreviewCount;

- (void).cxx_destruct;
- (id)focusInfo;
- (id)imageViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (long long)maximumPreviewCount;
- (id)overlayTitle;
- (id)regionOfInterestForOneUpTransition;
- (void)setHighlighted:(bool)arg1;
- (void)setImageViews:(id)arg1;
- (void)setOverlayTitle:(id)arg1;
- (void)setPreviewImage:(id)arg1 atIndex:(long long)arg2;
- (void)setVisiblePreviewCount:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)visiblePreviewCount;

@end
