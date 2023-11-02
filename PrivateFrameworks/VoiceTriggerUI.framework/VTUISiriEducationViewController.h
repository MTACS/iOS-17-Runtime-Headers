
@interface VTUISiriEducationViewController : OBWelcomeController {
    <VTUISiriEducationViewControllerDelegate> * _delegate;
    AVPlayer * _player;
    AVPlayerLooper * _playerLooper;
    AVPlayerViewController * _playerViewController;
    VTUIStyle * _style;
}

- (void).cxx_destruct;
- (void)_continueButtonPressed;
- (void)_fadeInSubViews;
- (void)_setupContinueButton;
- (void)_setupImageContainerViewForTraitCollection:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 style:(id)arg3 delegate:(id)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
