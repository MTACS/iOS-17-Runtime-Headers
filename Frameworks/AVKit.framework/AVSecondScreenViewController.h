
@interface AVSecondScreenViewController : UIViewController {
    UIView * _contentView;
    UILabel * _debugLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialScreenBoundsHint;
    AVSecondScreenPlayerLayerView * _playerLayerView;
    bool  _playingOnSecondScreen;
    AVPlayerLayer * _sourcePlayerLayer;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UILabel *debugLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialScreenBoundsHint;
@property (nonatomic, retain) AVSecondScreenPlayerLayerView *playerLayerView;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic) AVPlayerLayer *sourcePlayerLayer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } videoDisplaySize;

- (void).cxx_destruct;
- (void)_updateContentViewIfNeeded;
- (void)_updateLayout;
- (id)contentView;
- (void)dealloc;
- (id)debugLabel;
- (id)debugText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialScreenBoundsHint;
- (bool)isPlayingOnSecondScreen;
- (void)loadPlayerLayerViewIfNeeded;
- (void)loadView;
- (id)playerLayerView;
- (void)setContentView:(id)arg1;
- (void)setDebugText:(id)arg1;
- (void)setInitialScreenBoundsHint:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayerLayerView:(id)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setSourcePlayerLayer:(id)arg1;
- (id)sourcePlayerLayer;
- (struct CGSize { double x1; double x2; })videoDisplaySize;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
