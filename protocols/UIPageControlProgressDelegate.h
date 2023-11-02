
@protocol UIPageControlProgressDelegate <NSObject>

@optional

- (float)pageControlProgress:(UIPageControlProgress *)arg1 initialProgressForPage:(long long)arg2;
- (void)pageControlProgressVisibilityDidChange:(UIPageControlProgress *)arg1;

@end
