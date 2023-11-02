
@interface PUPhotosSharingTransition : PUModalTransition {
    UICollectionViewLayout * __transitionLayout;
    <PUPhotosSharingTransitionDelegate> * _delegate;
    PUPhotosSharingTransitionContext * _photosSharingTransitionContext;
    UIViewController<PUPhotosSharingTransitionViewController> * _sharingTransitionViewController;
}

@property (setter=_setTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_transitionLayout;
@property (nonatomic) <PUPhotosSharingTransitionDelegate> *delegate;
@property (nonatomic, retain) PUPhotosSharingTransitionContext *photosSharingTransitionContext;
@property (nonatomic, retain) UIViewController<PUPhotosSharingTransitionViewController> *sharingTransitionViewController;

- (void).cxx_destruct;
- (void)_setTransitionLayout:(id)arg1;
- (id)_transitionLayout;
- (void)animateDismissTransition;
- (void)animatePresentTransition;
- (id)delegate;
- (id)photosSharingTransitionContext;
- (void)setDelegate:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setSharingTransitionViewController:(id)arg1;
- (id)sharingTransitionViewController;

@end
