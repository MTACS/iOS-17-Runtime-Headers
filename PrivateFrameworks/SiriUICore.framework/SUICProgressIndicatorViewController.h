
@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving> {
    <SUICProgressIndicatorViewControllerDataSource> * _dataSource;
    SUICProgressIndicatorView * _progressIndicatorView;
}

@property (nonatomic) <SUICProgressIndicatorViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_progressIndicatorView, setter=_setProgressIndicatorView:, nonatomic, retain) SUICProgressIndicatorView *progressIndicatorView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_progressIndicatorView;
- (void)_setProgressIndicatorView:(id)arg1;
- (bool)_shouldAcceptEventsFromStateMachine:(id)arg1;
- (id)_stateMachine;
- (id)dataSource;
- (void)loadView;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;
- (void)setDataSource:(id)arg1;

@end
