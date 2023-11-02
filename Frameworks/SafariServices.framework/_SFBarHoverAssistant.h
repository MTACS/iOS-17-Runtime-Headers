
@interface _SFBarHoverAssistant : NSObject <_SFDynamicBarAnimatorStateObserver> {
    UIView<_SFBarCommon> * _bar;
    UIView * _containerView;
    bool  _didShowBarFromHover;
    _SFDynamicBarAnimator * _dynamicBarAnimator;
    UIHoverGestureRecognizer * _hoverRecognizer;
}

@property (nonatomic, readonly) UIView<_SFBarCommon> *bar;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _SFDynamicBarAnimator *dynamicBarAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)attachToBar:(id)arg1 withAnimator:(id)arg2 inContainerView:(id)arg3;

- (void).cxx_destruct;
- (bool)_gestureIsOverBar;
- (void)_hover:(id)arg1;
- (id)bar;
- (id)containerView;
- (void)dealloc;
- (id)dynamicBarAnimator;
- (void)dynamicBarAnimatorStateDidChange:(id)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (id)initWithBar:(id)arg1 withAnimator:(id)arg2 inContainerView:(id)arg3;

@end
