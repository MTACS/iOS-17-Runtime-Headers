
@interface HUCameraBlurViewController : UIViewController {
    UIVisualEffectView * _blurView;
    bool  _showingBlur;
}

@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic) bool showingBlur;

- (void).cxx_destruct;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (void)setShowingBlur:(bool)arg1;
- (bool)shouldShowBlurForPlaybackEngine:(id)arg1;
- (bool)showingBlur;
- (void)updateBlurWithPlaybackEngine:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)viewDidLoad;

@end
