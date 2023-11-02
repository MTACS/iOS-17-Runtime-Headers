
@interface CCUIToggleViewController : CCUIButtonModuleViewController {
    CCUIToggleModule * _module;
}

@property (nonatomic) CCUIToggleModule *module;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)module;
- (double)preferredExpandedContentHeight;
- (void)reconfigureView;
- (void)refreshStateAnimated:(bool)arg1;
- (void)setModule:(id)arg1;
- (bool)shouldFinishTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
