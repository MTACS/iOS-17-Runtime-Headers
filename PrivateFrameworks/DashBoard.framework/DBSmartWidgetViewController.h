
@interface DBSmartWidgetViewController : DBWidgetViewController <DBSmartWidgetEngineObserver, UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _actionRecognizer;
    UITapGestureRecognizer * _actionSelectRecognizer;
    <DBSmartWidgetAnimating> * _animationDelegate;
    long long  _currentPredictionIndex;
    DBSmartWidgetEngine * _engine;
    UISwipeGestureRecognizer * _nextPredictionRecognizer;
    UISwipeGestureRecognizer * _previousPredictionRecognizer;
    NSSet * _recognizers;
    UILongPressGestureRecognizer * _refreshRecognizer;
    UIActivityIndicatorView * _spinnerView;
    bool  _wantsToShowPrediction;
    DBSmartWidgetView * _widgetView;
}

@property (nonatomic, retain) UITapGestureRecognizer *actionRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *actionSelectRecognizer;
@property (nonatomic) <DBSmartWidgetAnimating> *animationDelegate;
@property (nonatomic) long long currentPredictionIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DBSmartWidgetEngine *engine;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (nonatomic, retain) UISwipeGestureRecognizer *nextPredictionRecognizer;
@property (nonatomic, retain) UISwipeGestureRecognizer *previousPredictionRecognizer;
@property (nonatomic, retain) NSSet *recognizers;
@property (nonatomic, retain) UILongPressGestureRecognizer *refreshRecognizer;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsToShowPrediction;
@property (nonatomic, retain) DBSmartWidgetView *widgetView;

- (void).cxx_destruct;
- (void)_nextPrediction;
- (void)_performAction;
- (void)_previousPrediction;
- (void)_refresh;
- (void)_updatePrediction;
- (id)actionRecognizer;
- (id)actionSelectRecognizer;
- (id)animationDelegate;
- (long long)currentPredictionIndex;
- (id)engine;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithEnvironment:(id)arg1 engine:(id)arg2 animationDelegate:(id)arg3;
- (bool)isHighPriority;
- (id)nextPredictionRecognizer;
- (id)previousPredictionRecognizer;
- (id)recognizers;
- (id)refreshRecognizer;
- (void)setActionRecognizer:(id)arg1;
- (void)setActionSelectRecognizer:(id)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setCurrentPredictionIndex:(long long)arg1;
- (void)setNextPredictionRecognizer:(id)arg1;
- (void)setPreviousPredictionRecognizer:(id)arg1;
- (void)setRecognizers:(id)arg1;
- (void)setRefreshRecognizer:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setWantsToShowPrediction:(bool)arg1;
- (void)setWidgetView:(id)arg1;
- (void)smartWidgetEngine:(id)arg1 didUpdateCurrentPredictions:(id)arg2;
- (void)smartWidgetEngineDidStart:(id)arg1;
- (void)smartWidgetEngineDidStop:(id)arg1;
- (void)smartWidgetEngineDidUpdatePredictionsFresh:(id)arg1;
- (id)spinnerView;
- (void)viewDidLoad;
- (bool)wantsToShowPrediction;
- (id)widgetView;

@end
