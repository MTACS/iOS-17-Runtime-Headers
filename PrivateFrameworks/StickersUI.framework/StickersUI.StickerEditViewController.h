
@interface StickersUI.StickerEditViewController : UIViewController {
    void $__lazy_storage_$_doneButton;
    void $__lazy_storage_$_effectChooser;
    void $__lazy_storage_$_liveButton;
    void $__lazy_storage_$_previewHeightConstraint;
    void $__lazy_storage_$_previewView;
    void $__lazy_storage_$_previewWidthConstraint;
    void animatedRepresentation;
    void canToggleLive;
    void delegate;
    void isLive;
    void isPaused;
    void noEffectShouldBeLive;
    void preLiveSickerEffect;
    void preferredRepresentation;
    void sticker;
    void stillRepresentation;
    void transitionAnimator;
}

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)handleDoneButton;
- (void)handleLiveButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
