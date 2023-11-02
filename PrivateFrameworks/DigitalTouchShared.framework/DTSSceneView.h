
@interface DTSSceneView : UIView {
    bool  _allowsTransparency;
    bool  _didDelayLayout;
    bool  _ignoresSiblingOrder;
    bool  _paused;
    long long  _preferredFramesPerSecond;
    SKView * _sceneView;
    bool  _shouldCullNonVisibleNodes;
    bool  _shouldDelayLayout;
}

@property (nonatomic) bool allowsTransparency;
@property (nonatomic) bool ignoresSiblingOrder;
@property (readonly) NSMutableDictionary *options;
@property (nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) bool shouldCullNonVisibleNodes;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)_updateLayout;
- (bool)allowsTransparency;
- (bool)ignoresSiblingOrder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)options;
- (bool)paused;
- (long long)preferredFramesPerSecond;
- (void)presentScene:(id)arg1;
- (void)setAllowsTransparency:(bool)arg1;
- (void)setIgnoresSiblingOrder:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setShouldCullNonVisibleNodes:(bool)arg1;
- (bool)shouldCullNonVisibleNodes;

@end
