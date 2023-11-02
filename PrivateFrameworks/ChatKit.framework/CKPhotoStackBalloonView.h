
@interface CKPhotoStackBalloonView : CKGenericPhotoStackBalloonView <PXMessagesStackViewDelegate>

@property (nonatomic, retain) CKMediaObjectAssetDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKPhotoStackBalloonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMediaObjectImageProvider *mediaProvider;
@property (readonly) Class superclass;

- (void)_additionalItemsCountDidChange;
- (id)_createStackView;
- (void)_setTapbackManagerOnStackView:(id)arg1;
- (void)_updateAdditionalItemsCount;
- (void)configureForMessagePart:(id)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)removeTransitionView;
- (void)stackView:(id)arg1 didChangeCurrentAssetReference:(id)arg2 isProgrammaticChange:(bool)arg3 didChangeIndex:(bool)arg4;
- (void)stackView:(id)arg1 didSelectAssetReference:(id)arg2;
- (bool)stackView:(id)arg1 shouldAutoplayAsset:(id)arg2;
- (void)stackViewDidSelectAdditionalItemsCard:(id)arg1;
- (id)transitionViewForCurrentItem:(id)arg1 sourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;

@end
