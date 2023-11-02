
@interface SBFluidSwitcherModifierTimelineViewController : UIViewController <SBFluidSwitcherModifierTimelineEntryViewDelegate> {
    UIButton * _clearButton;
    SBModifierTimelineDetailViewController * _detailViewController;
    NSMutableArray * _entryViews;
    bool  _ignoreNoisyEvents;
    bool  _isPaused;
    UINavigationController * _navigationController;
    UIButton * _noiseLevelButton;
    UIButton * _pauseButton;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreNoisyEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset:(id)arg1;
- (void)_toggleNoiseLevel:(id)arg1;
- (void)_togglePause:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)didSelectEntryView:(id)arg1;
- (bool)ignoreNoisyEvents;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
