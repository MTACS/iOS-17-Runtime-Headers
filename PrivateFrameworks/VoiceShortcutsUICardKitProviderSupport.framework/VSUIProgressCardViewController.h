
@interface VSUIProgressCardViewController : CRKCardViewController <SUICProgressIndicatorViewControllerDataSource, SUICProgressStateMachineObserving, VSUIActionStatusViewDelegate> {
    bool  _animatesStateTransitions;
    UIView * _hairlineView;
    bool  _hasAsynchronousCard;
    UIActivityIndicatorView * _loadingIndicatorView;
    NSProgress * _progress;
    SUICProgressIndicatorViewController * _progressIndicatorViewController;
    SUICProgressStateMachine * _progressStateMachine;
    VSUIActionStatusView * _statusView;
    NSLayoutConstraint * _statusViewFailureHeightConstraint;
    NSLayoutConstraint * _statusViewSuccessHeightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hairlineView, setter=_setHairlineView:, nonatomic, retain) UIView *hairlineView;
@property (readonly) unsigned long long hash;
@property (getter=_loadingIndicatorView, setter=_setLoadingIndicatorView:, nonatomic, retain) UIActivityIndicatorView *loadingIndicatorView;
@property (readonly) NSProgress *progress;
@property (getter=_progressIndicatorViewController, setter=_setProgressIndicatorViewController:, nonatomic, retain) SUICProgressIndicatorViewController *progressIndicatorViewController;
@property (getter=_progressStateMachine, setter=_setProgressStateMachine:, nonatomic, retain) SUICProgressStateMachine *progressStateMachine;
@property (getter=_statusView, setter=_setStatusView:, nonatomic, retain) VSUIActionStatusView *statusView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_hairlineView;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(bool)arg3;
- (id)_loadingIndicatorView;
- (id)_progressIndicatorViewController;
- (id)_progressStateMachine;
- (void)_setHairlineView:(id)arg1;
- (void)_setLoadingIndicatorView:(id)arg1;
- (void)_setProgressIndicatorViewController:(id)arg1;
- (void)_setProgressStateMachine:(id)arg1;
- (void)_setStatusView:(id)arg1;
- (void)_setUpHelpers;
- (void)_setUpViews;
- (id)_statusView;
- (void)_updateDelegateOnBoundsDidChange;
- (void)actionStatusView:(id)arg1 didAddViewFromProgressViewController:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (double)contentHeightForWidth:(double)arg1;
- (void)handleCardCommand:(id)arg1 reply:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)progress;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;
- (id)progressViewController;
- (bool)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(id)arg3;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;

@end
