
@interface JFXAVPlayerViewController : AVPlayerViewController <JFXAVPlayerViewer> {
    bool  showAVControls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } displaySize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) bool showAVControls;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property (nonatomic, copy) NSString *videoGravity;

- (void)configureDisplayAttributesForColorSpace:(id)arg1;
- (struct CGSize { double x1; double x2; })displaySize;
- (void)setShowAVControls:(bool)arg1;
- (bool)showAVControls;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
