
@interface EmojiPoster.EmojiSceneViewController : UIViewController {
    void configuration;
    void currentLayoutStyle;
    void currentSizeVariant;
    void overlayLayer;
    void scene;
    void sceneView;
    void unlockProgress;
    void wakeProgress;
}

@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic, readonly) bool shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)prefersStatusBarHidden;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
