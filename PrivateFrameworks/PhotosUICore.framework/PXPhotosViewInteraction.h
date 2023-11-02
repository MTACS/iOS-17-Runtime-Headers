
@interface PXPhotosViewInteraction : PXGInteraction <PXZoomablePhotosInteractionDelegate> {
    PXPhotosContentController * _contentController;
    <PXPhotosViewInteractionDelegate> * _delegate;
    PXPhotosViewModel * _viewModel;
    PXZoomablePhotosInteraction * _zoomablePhotosInteraction;
}

@property (nonatomic) PXPhotosContentController *contentController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosViewInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic, retain) PXZoomablePhotosInteraction *zoomablePhotosInteraction;

+ (id)interactionWithViewModel:(id)arg1;

- (void).cxx_destruct;
- (id)assetHitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1 coordinateSpace:(id)arg2;
- (id)assetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 inCoordinateSpace:(id)arg3;
- (id)contentController;
- (id)delegate;
- (id)initWithViewModel:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage {}**)arg2 fallbackMediaProvider:(id)arg3 shouldSnapshot:(bool)arg4;
- (void)setContentController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setZoomablePhotosInteraction:(id)arg1;
- (id)viewModel;
- (id)zoomablePhotosInteraction;
- (id)zoomablePhotosInteraction:(id)arg1 assetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)zoomablePhotosInteractionShouldBegin:(id)arg1;
- (void)zoomablePhotosInteractionWillBegin:(id)arg1;

@end
