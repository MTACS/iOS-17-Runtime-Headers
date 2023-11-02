
@protocol DBHomeViewPageChangeObserving <NSObject>

@required

- (void)homeViewController:(DBDashboardHomeViewController *)arg1 didChangeToPageIndex:(long long)arg2 firstIconPageIndex:(long long)arg3 minimumPageIndex:(long long)arg4;

@end
