
@interface PXContentSyndicationGadgetView : UICollectionViewCell <PXChangeObserver, SLAttributionViewDelegate> {
    PXContentSyndicationItemAssetPreviewView * _assetPreviewView;
    bool  _contentViewHiddenForOneUpTransition;
    <PXContentSyndicationGadgetViewDelegate> * _delegate;
    SLAttributionView * _socialLayerAttributionView;
    PXContentSyndicationGadgetViewModel * _viewModel;
}

@property (nonatomic) bool contentViewHiddenForOneUpTransition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXContentSyndicationGadgetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *previewView;
@property (nonatomic, readonly, copy) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXContentSyndicationGadgetViewModel *viewModel;

+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 viewModel:(id)arg2;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 applyLayoutToSubviews:(bool)arg2;
- (void)_updateKeyImageCount;
- (void)_updateKeyImages;
- (void)_updateOverlayTitle;
- (void)_updateSocialLayerAttributionView;
- (bool)contentViewHiddenForOneUpTransition;
- (id)contextMenuItemsForAttributionView:(id)arg1;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)previewView;
- (id)regionOfInterestForOneUpTransition;
- (id)replyActionFromAttributionView;
- (void)setContentViewHiddenForOneUpTransition:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewModel;

@end
