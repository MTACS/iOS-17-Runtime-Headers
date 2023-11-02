
@interface CKGenericPhotoStackBalloonView : CKBalloonView <PXAssetsDataSourceManagerObserver> {
    PXAssetsDataSourceManager * _dataSourceManager;
    UIView<CKGradientReferenceView> * _gradientReferenceView;
    double  _horizontalContentMargin;
    PXUIMediaProvider * _mediaProvider;
    PXMessagesStackView * _stackView;
    bool  _wantsContactImageLayout;
}

@property (nonatomic, readonly) PXAssetReference *currentAssetReference;
@property (nonatomic, retain) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalContentMargin;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXMessagesStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsContactImageLayout;

- (void).cxx_destruct;
- (void)_additionalItemsCountDidChange;
- (id)_createStackView;
- (bool)_scrollLeadingAnimated:(bool)arg1;
- (bool)_scrollTrailingAnimated:(bool)arg1;
- (id)createOverlayImageView;
- (id)currentAssetReference;
- (id)dataSourceManager;
- (id)gradientReferenceView;
- (double)horizontalContentMargin;
- (double)horizontalContentMarginForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)pageLeftAnimated:(bool)arg1;
- (bool)pageRightAnimated:(bool)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setDataSourceManager:(id)arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setHasOverlay:(bool)arg1 autoDismiss:(bool)arg2;
- (void)setHorizontalContentMarginAdjustment:(double)arg1 edge:(long long)arg2;
- (void)setMediaProvider:(id)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (id)stackView;
- (bool)wantsContactImageLayout;

@end
