
@protocol SBHSearchPresenting

@required

- (void)addSearchPresenterObserver:(id <SBHSearchPresenterObserver>)arg1;
- (void)dismissSearchAnimated:(bool)arg1;
- (struct SBHSearchInteractivePresentationMetrics { double x1; double x2; double x3; double x4; })interactivePresentationMetrics;
- (bool)isPresenting;
- (void)layout;
- (void)presentSearchAnimated:(bool)arg1;
- (double)presentationOffset;
- (double)presentationProgress;
- (long long)presentationState;
- (void)removeSearchPresenterObserver:(id <SBHSearchPresenterObserver>)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (<SBHSearchPresenterDelegate> *)searchPresenterDelegate;
- (void)setInteractivePresentationMetrics:(struct SBHSearchInteractivePresentationMetrics { double x1; double x2; double x3; double x4; })arg1;
- (void)setSearchPresenterDelegate:(id <SBHSearchPresenterDelegate>)arg1;

@end
