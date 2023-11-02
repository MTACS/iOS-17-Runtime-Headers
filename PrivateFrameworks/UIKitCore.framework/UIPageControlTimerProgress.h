
@interface UIPageControlTimerProgress : UIPageControlProgress {
    double  _currentDuration;
    double  _currentDurationProgress;
    NSMutableDictionary * _customDurationByPage;
    struct { 
        unsigned int progressDidChange : 1; 
        unsigned int shouldAdvanceToPage : 1; 
    }  _delegateImplements;
    CADisplayLink * _displayLink;
    bool  _enableTimer;
    double  _preferredDuration;
    double  _previousTime;
    bool  _resetsToInitialPageAfterEnd;
}

@property (nonatomic, retain) NSMutableDictionary *customDurationByPage;
@property (nonatomic) <UIPageControlTimerProgressDelegate> *delegate;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) bool enableTimer;
@property (nonatomic) double preferredDuration;
@property (nonatomic) bool resetsToInitialPageAfterEnd;
@property (getter=isRunning, nonatomic, readonly) bool running;

- (void).cxx_destruct;
- (bool)_canInstallTimer;
- (void)_didChangeCurrentPage;
- (void)_displayLinkTicked:(id)arg1;
- (void)_pageControlDidMoveToWindow;
- (void)_progressVisibilityChanged:(bool)arg1;
- (bool)_shouldAdvanceToPage:(long long)arg1;
- (void)_updateTimer;
- (id)customDurationByPage;
- (void)dealloc;
- (id)displayLink;
- (double)durationForPage:(long long)arg1;
- (bool)enableTimer;
- (id)initWithPreferredDuration:(double)arg1;
- (bool)isRunning;
- (void)pauseTimer;
- (double)preferredDuration;
- (bool)resetsToInitialPageAfterEnd;
- (void)resumeTimer;
- (void)setCurrentProgress:(float)arg1;
- (void)setCustomDurationByPage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setDuration:(double)arg1 forPage:(long long)arg2;
- (void)setEnableTimer:(bool)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPreferredDuration:(double)arg1;
- (void)setResetsToInitialPageAfterEnd:(bool)arg1;

@end
