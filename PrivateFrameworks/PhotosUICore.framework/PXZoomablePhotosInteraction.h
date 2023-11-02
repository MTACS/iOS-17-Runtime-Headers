
@interface PXZoomablePhotosInteraction : NSObject {
    double  _currentMagnifyEventScale;
    <PXZoomablePhotosInteractionDelegate> * _delegate;
    id  _eventMonitor;
    NSObject<PXAnonymousView> * _view;
    PXZoomablePhotosViewModel * _viewModel;
}

@property (nonatomic) <PXZoomablePhotosInteractionDelegate> *delegate;
@property (nonatomic) NSObject<PXAnonymousView> *view;
@property (nonatomic, readonly) PXZoomablePhotosViewModel *viewModel;

- (void).cxx_destruct;
- (bool)_pinchInteractionShouldBegin;
- (id)delegate;
- (bool)handlePinch:(id)arg1;
- (bool)handleTapOnAssetReference:(id)arg1;
- (id)init;
- (id)initWithZoomablePhotosViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (id)viewModel;

@end
