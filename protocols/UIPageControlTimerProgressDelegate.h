
@protocol UIPageControlTimerProgressDelegate <UIPageControlProgressDelegate>

@optional

- (bool)pageControlTimerProgress:(UIPageControlTimerProgress *)arg1 shouldAdvanceToPage:(long long)arg2;
- (void)pageControlTimerProgressDidChange:(UIPageControlTimerProgress *)arg1;

@end
