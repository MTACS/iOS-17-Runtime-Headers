
@interface PXStoryPlayButton : UIView <PXChangeObserver, PXGReusableView> {
    NSString * _axPauseLabel;
    NSString * _axPlayLabel;
    NSString * _axReplayLabel;
    PXStoryChromeButton * _button;
    PXStoryChromeButtonConfiguration * _buttonConfiguration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    PXStoryPlayButtonConfiguration * _configuration;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeOutsets;
    CAShapeLayer * _progressIndicator;
    PXUpdater * _updater;
    PXStoryPlayButtonConfiguration * _userData;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, readonly) NSString *axPauseLabel;
@property (nonatomic, readonly) NSString *axPlayLabel;
@property (nonatomic, readonly) NSString *axReplayLabel;
@property (nonatomic, readonly) PXStoryChromeButton *button;
@property (nonatomic, readonly) PXStoryChromeButtonConfiguration *buttonConfiguration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, retain) PXStoryPlayButtonConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeOutsets;
@property (nonatomic, readonly) CAShapeLayer *progressIndicator;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, copy) PXStoryPlayButtonConfiguration *userData;
@property (nonatomic, retain) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateButton;
- (void)_invalidateProgressIndicator;
- (void)_setNeedsUpdate;
- (void)_updateButton;
- (void)_updateProgressIndicator;
- (id)accessibilityLabel;
- (id)axPauseLabel;
- (id)axPlayLabel;
- (id)axReplayLabel;
- (void)becomeReusable;
- (id)button;
- (id)buttonConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)configuration;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeOutsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)progressIndicator;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)updater;
- (id)userData;
- (id)viewModel;

@end
