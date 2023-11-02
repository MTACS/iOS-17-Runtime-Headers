
@protocol SBHTodayViewControllerObserver <NSObject>

@optional

- (void)todayViewController:(id <SBHTodayViewController>)arg1 contentVisibilityDidChange:(unsigned long long)arg2;
- (void)todayViewController:(id <SBHTodayViewController>)arg1 contentVisibilityWillChange:(unsigned long long)arg2;
- (void)todayViewController:(id <SBHTodayViewController>)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(bool)arg4;
- (void)todayViewControllerDidAppear:(id <SBHTodayViewController>)arg1;
- (void)todayViewControllerDidDisappear:(id <SBHTodayViewController>)arg1;
- (void)todayViewControllerDidEndScrolling:(id <SBHTodayViewController>)arg1;
- (void)todayViewControllerWillDisappear:(id <SBHTodayViewController>)arg1;

@end
