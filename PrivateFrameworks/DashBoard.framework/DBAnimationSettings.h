
@interface DBAnimationSettings : NSObject {
    DBAppDockViewController * _appDockViewController;
    UIView * _fromTransitionContainerView;
    UIView * _fromView;
    UIColor * _rootContainerBackgroundColor;
    UIView * _rootContainerView;
    NSString * _toIdentifier;
    UIView * _toTransitionContainerView;
    UIView * _toView;
}

@property (nonatomic, retain) DBAppDockViewController *appDockViewController;
@property (nonatomic, retain) UIView *fromTransitionContainerView;
@property (nonatomic, retain) UIView *fromView;
@property (nonatomic, retain) UIColor *rootContainerBackgroundColor;
@property (nonatomic, retain) UIView *rootContainerView;
@property (nonatomic, copy) NSString *toIdentifier;
@property (nonatomic, retain) UIView *toTransitionContainerView;
@property (nonatomic, retain) UIView *toView;

- (void).cxx_destruct;
- (id)appDockViewController;
- (id)fromTransitionContainerView;
- (id)fromView;
- (id)rootContainerBackgroundColor;
- (id)rootContainerView;
- (void)setAppDockViewController:(id)arg1;
- (void)setFromTransitionContainerView:(id)arg1;
- (void)setFromView:(id)arg1;
- (void)setRootContainerBackgroundColor:(id)arg1;
- (void)setRootContainerView:(id)arg1;
- (void)setToIdentifier:(id)arg1;
- (void)setToTransitionContainerView:(id)arg1;
- (void)setToView:(id)arg1;
- (id)toIdentifier;
- (id)toTransitionContainerView;
- (id)toView;

@end
