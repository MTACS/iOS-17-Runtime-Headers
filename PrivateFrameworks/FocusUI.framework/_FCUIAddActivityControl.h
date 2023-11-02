
@interface _FCUIAddActivityControl : UIControl <FCUIContentSizeCategoryAdjusting, MTVisualStylingProviding, UIPointerInteractionDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    MTMaterialView * _backgroundMaterialView;
    UIImageView * _glyphImageView;
    NSString * _preferredContentSizeCategory;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureBackgroundMaterialViewIfNecesssary;
- (void)_configureGlyphImageViewIfNecessary;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
