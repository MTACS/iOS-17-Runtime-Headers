
@interface FMFindingUI.FMAVPlayerView : UIView {
    void assetBundle;
    void assetManager;
    void assetName;
    void crossDissolveDuration;
    void deviceAssetRequestWatchDogWorkItem;
    void disableAutoLoop;
    void info;
    void isPlaying;
    void isShown;
    void placeholderView;
    void player;
    void playerEndedObserver;
    void playerStartedObservation;
    void playerTimeObserver;
    void playingAssetName;
    void playingHandler;
    void showHideHandler;
    void time;
}

@property (nonatomic, readonly) NSString *accessibilityAssetName;
@property (nonatomic, readonly) NSString *description;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)accessibilityAssetName;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
