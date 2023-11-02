
@interface _TVRMAlertControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {
    UIView * _contentView;
    UIView * _dimmingView;
    bool  _isPresentation;
}

@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)contentView;
- (id)dimmingView;
- (bool)isPresentation;
- (void)setContentView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setIsPresentation:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
