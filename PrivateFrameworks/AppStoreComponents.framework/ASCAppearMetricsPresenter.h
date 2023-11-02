
@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate> {
    ASCMetricsActivity * _activity;
    bool  _appeared;
    bool  _enabled;
    bool  _enteringBackground;
    bool  _enteringForeground;
    ASCMetrics * _metrics;
    <ASCViewModel> * _model;
    NSNotificationCenter * _notificationCenter;
    ASCMetricsScrollObserver * _scrollObserver;
    bool  _settingModel;
    UIView * _view;
}

@property (nonatomic, copy) ASCMetricsActivity *activity;
@property (getter=isAppeared, nonatomic) bool appeared;
@property (nonatomic, readonly) bool canAppear;
@property (nonatomic, readonly) bool canDisappear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isEnteringBackground, nonatomic) bool enteringBackground;
@property (getter=isEnteringForeground, nonatomic) bool enteringForeground;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASCMetrics *metrics;
@property (nonatomic, copy) <ASCViewModel> *model;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) ASCMetricsScrollObserver *scrollObserver;
@property (getter=isSettingModel, nonatomic) bool settingModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)log;

- (void).cxx_destruct;
- (id)activity;
- (void)appearIfNeeded;
- (bool)canAppear;
- (bool)canDisappear;
- (void)dealloc;
- (id)description;
- (void)disappearIfNeeded;
- (void)hostDidEnterBackground;
- (void)hostWillEnterForeground;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (bool)isAppeared;
- (bool)isEnabled;
- (bool)isEnteringBackground;
- (bool)isEnteringForeground;
- (bool)isSettingModel;
- (id)metrics;
- (id)model;
- (id)notificationCenter;
- (id)scrollObserver;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setAppeared:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnteringBackground:(bool)arg1;
- (void)setEnteringForeground:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setScrollObserver:(id)arg1;
- (void)setSettingModel:(bool)arg1;
- (id)view;
- (void)viewDidAction;
- (void)viewDidEndRenderWithPredicate:(id)arg1;
- (void)viewDidFailRequest:(id)arg1 withError:(id)arg2;
- (void)viewDidMoveToWindow;
- (void)viewDidRetryFailedRequest;
- (void)viewDidSetHidden;

@end
