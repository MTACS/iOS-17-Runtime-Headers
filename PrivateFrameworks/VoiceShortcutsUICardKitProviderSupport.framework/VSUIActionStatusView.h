
@interface VSUIActionStatusView : UIView <SUICProgressStateMachineObserving> {
    UIView * _activityView;
    <VSUIActionStatusViewDelegate> * _delegate;
    _VSUIActionStatusErrorView * _errorView;
}

@property (nonatomic, retain) UIView *activityView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSUIActionStatusViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _VSUIActionStatusErrorView *errorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpViews;
- (void)_updateAcitivityViewSubviewWithDelegateProvidedView;
- (id)activityView;
- (id)delegate;
- (id)errorView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;
- (void)resetState;
- (void)setActivityView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
