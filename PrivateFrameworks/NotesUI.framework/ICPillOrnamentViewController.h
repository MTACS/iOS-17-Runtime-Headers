
@interface ICPillOrnamentViewController : UIViewController {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentAnchorPoint;
    UIView * _contentView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    UIViewController * _rootViewController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sceneAnchorPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentAnchorPoint;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) bool isShowing;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic) struct CGPoint { double x1; double x2; } sceneAnchorPoint;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })contentAnchorPoint;
- (id)contentView;
- (void)hide;
- (id)initWithRootViewController:(id)arg1 contentAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 sceneAnchorPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isShowing;
- (void)loadView;
- (struct CGPoint { double x1; double x2; })offset;
- (id)rootViewController;
- (struct CGPoint { double x1; double x2; })sceneAnchorPoint;
- (void)setContentAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRootViewController:(id)arg1;
- (void)setSceneAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)show;

@end
