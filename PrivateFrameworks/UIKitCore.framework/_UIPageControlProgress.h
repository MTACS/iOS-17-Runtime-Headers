
@interface _UIPageControlProgress : UIPageControlProgress {
    struct { 
        unsigned int progressForPage : 1; 
        unsigned int didPause : 1; 
        unsigned int didResume : 1; 
    }  _delegateImplements;
}

@property (nonatomic) <_UIPageControlProgressDelegate> *delegate;

- (void)_pausePageProgress;
- (void)_progressVisibilityChanged:(bool)arg1;
- (void)_resumePageProgress;
- (void)setDelegate:(id)arg1;

@end
