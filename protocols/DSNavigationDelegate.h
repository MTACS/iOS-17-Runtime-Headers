
@protocol DSNavigationDelegate <NSObject>

@required

- (LAContext *)authContext;
- (void)displayNetworkError;
- (void)goToCustomizeSharing;
- (bool)isNetworkReachable;
- (void)learnMorePressedForController:(UIViewController *)arg1 withURL:(NSString *)arg2;
- (void)pushNextPane;
- (void)quickExit;
- (void)setAuthContext:(LAContext *)arg1;
- (void)startFlowWithType:(long long)arg1;

@optional

- (DSSharingPermissions *)fetchedSharingPermissions;
- (void)pushPaneAfterPaneType:(Class)arg1;
- (void)pushPaneType:(Class)arg1 loadRemoteUI:(bool)arg2;
- (void)setFetchedSharingPermissions:(DSSharingPermissions *)arg1;
- (NSMutableSet *)unsharedApps;
- (NSMutableSet *)unsharedPeople;
- (NSMutableSet *)unsharedPermissions;
- (NSMutableDictionary *)unsharedResourcesBySource;

@end
