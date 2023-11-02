
@protocol AFUISiriViewControllerDataSource <NSObject>

@required

- (NSArray *)bulletinsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)contextAppInfosForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)getDeviceEngagementEvents:(AFUISiriViewController *)arg1 forDeviceEngagementTimeWindow:(double)arg2;
- (unsigned long long)lockStateForSiriViewController:(AFUISiriViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForSceneCreationInSiriViewController:(AFUISiriViewController *)arg1;
- (AFBulletin *)siriViewController:(AFUISiriViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;

@optional

- (NSArray *)currentCarPlaySupportedOEMAppsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriViewController:(AFUISiriViewController *)arg1;

@end
