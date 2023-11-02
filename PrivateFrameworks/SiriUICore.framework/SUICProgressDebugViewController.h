
@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {
    UIButton * _eventGeneratorButton;
    SUICProgressIndicatorViewController * _indicatorViewController;
    SUICProgressStateMachine * _stateMachine;
    unsigned long long  _testEventLoopCounter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_eventGeneratorButtonTouchedUpInside:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)progress;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
