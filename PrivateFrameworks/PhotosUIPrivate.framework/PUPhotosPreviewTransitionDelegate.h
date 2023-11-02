
@interface PUPhotosPreviewTransitionDelegate : _UIPreviewTransitionDelegate {
    <PUPhotosPreviewPresentationControllerDelegate> * _photosPreviewingDelegate;
}

@property (nonatomic) <PUPhotosPreviewPresentationControllerDelegate> *photosPreviewingDelegate;

- (void).cxx_destruct;
- (id)photosPreviewingDelegate;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setPhotosPreviewingDelegate:(id)arg1;

@end
