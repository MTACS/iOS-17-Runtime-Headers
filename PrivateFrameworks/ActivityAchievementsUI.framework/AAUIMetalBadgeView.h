
@interface AAUIMetalBadgeView : UIView <AAUIBadgeViewDrawable> {
    <AAUIBadgeViewDrawableDelegate> * _delegate;
    CAMetalLayer * _metalLayer;
    AAUIMetalBadgeRenderer * _renderer;
    bool  _useEarnedShader;
}

@property (nonatomic, retain) UIImage *backTextureImage;
@property (nonatomic, retain) AAUIBadgeModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIBadgeViewDrawableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMetalLayer *metalLayer;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) AAUIMetalBadgeRenderer *renderer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)backTextureImage;
- (void)cleanupAfterSnapshot;
- (id)configuration;
- (id)delegate;
- (id)initUsingEarnedShader:(bool)arg1 delegate:(id)arg2;
- (bool)isPaused;
- (id)metalLayer;
- (id)renderer;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBackTextureImage:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMetalLayer:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRenderer:(id)arg1;
- (id)snapshot;
- (id)view;

@end
