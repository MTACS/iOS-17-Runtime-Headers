
@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController {
    <PUPhotosPreviewPresentationControllerDelegate> * _photosPreviewingDelegate;
}

@property (nonatomic) <PUPhotosPreviewPresentationControllerDelegate> *photosPreviewingDelegate;

- (void).cxx_destruct;
- (void)_revealTransitionDidComplete:(bool)arg1;
- (id)photosPreviewingDelegate;
- (void)setPhotosPreviewingDelegate:(id)arg1;

@end
