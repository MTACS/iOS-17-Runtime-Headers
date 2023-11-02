
@interface UIPageControlProgress : NSObject {
    float  _currentProgress;
    <UIPageControlProgressDelegate> * _delegate;
    struct { 
        unsigned int initialProgressForPage : 1; 
        unsigned int visibilityDidChange : 1; 
    }  _delegateImplements;
    UIPageControl * _pageControl;
    bool  _progressVisible;
}

@property (nonatomic) float currentProgress;
@property (nonatomic) <UIPageControlProgressDelegate> *delegate;
@property (nonatomic) UIPageControl *pageControl;
@property (getter=isProgressVisible, nonatomic, readonly) bool progressVisible;

- (void).cxx_destruct;
- (void)_didChangeCurrentPage;
- (float)_initialProgressForPage:(long long)arg1;
- (void)_pageControlDidMoveToWindow;
- (void)_progressVisibilityChanged:(bool)arg1;
- (float)currentProgress;
- (id)delegate;
- (id)init;
- (bool)isProgressVisible;
- (id)pageControl;
- (void)setCurrentProgress:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPageControl:(id)arg1;

@end
