
@protocol SBLogoutProgressDataSource <NSObject>

@required

- (NSArray *)pendingApplicationsForLogoutProgressTransientOverlayViewController:(SBLogoutProgressTransientOverlayViewController *)arg1;

@optional

- (NSDictionary *)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(SBLogoutProgressTransientOverlayViewController *)arg1;

@end
