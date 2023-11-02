
@interface DBDashboardAnimation : NSObject {
    DBAppDockViewController * _appDockViewController;
    UIView * _fromTransitionContainerView;
    UIView * _fromView;
    UIColor * _rootContainerBackgroundColor;
    UIView * _rootContainerView;
    NSString * _toIdentifier;
    UIView * _toTransitionContainerView;
    UIView * _toView;
}

@property (nonatomic, readonly) DBAppDockViewController *appDockViewController;
@property (nonatomic, readonly) UIView *fromTransitionContainerView;
@property (nonatomic, readonly) UIView *fromView;
@property (nonatomic, readonly) UIColor *rootContainerBackgroundColor;
@property (nonatomic, readonly) UIView *rootContainerView;
@property (nonatomic, readonly, copy) NSString *toIdentifier;
@property (nonatomic, readonly) UIView *toTransitionContainerView;
@property (nonatomic, readonly) UIView *toView;

- (void).cxx_destruct;
- (id)appDockViewController;
- (id)fromTransitionContainerView;
- (id)fromView;
- (id)initWithSettings:(id)arg1;
- (id)rootContainerBackgroundColor;
- (id)rootContainerView;
- (void)startAnimationWithCompletion:(id /* block */)arg1;
- (id)toIdentifier;
- (id)toTransitionContainerView;
- (id)toView;

@end
