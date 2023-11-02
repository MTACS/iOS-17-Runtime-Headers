
@interface DBStatusBarHomeButtonStateManager : NSObject <DBDashboardViewStateObserving, DBHomeViewPageChangeObserving> {
    long long  _currentPageIndex;
    unsigned long long  _currentViewState;
    <DBStatusBarButtonStateManagerDelegate> * _delegate;
    long long  _firstIconPageIndex;
    long long  _minimumPageIndex;
}

@property (nonatomic) long long currentPageIndex;
@property (nonatomic) unsigned long long currentViewState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DBStatusBarButtonStateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long firstIconPageIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long minimumPageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateHomeButtonState;
- (long long)currentPageIndex;
- (unsigned long long)currentViewState;
- (void)dashboardRootViewController:(id)arg1 didChangeToViewState:(unsigned long long)arg2;
- (id)delegate;
- (long long)firstIconPageIndex;
- (void)homeViewController:(id)arg1 didChangeToPageIndex:(long long)arg2 firstIconPageIndex:(long long)arg3 minimumPageIndex:(long long)arg4;
- (id)initWithDelegate:(id)arg1;
- (long long)minimumPageIndex;
- (void)setCurrentPageIndex:(long long)arg1;
- (void)setCurrentViewState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstIconPageIndex:(long long)arg1;
- (void)setMinimumPageIndex:(long long)arg1;

@end
