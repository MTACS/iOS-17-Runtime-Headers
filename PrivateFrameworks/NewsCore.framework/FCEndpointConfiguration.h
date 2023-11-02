
@interface FCEndpointConfiguration : NSObject {
    NSString * _appAnalyticsAppHealthBaseURLString;
    NSString * _appAnalyticsBaseURLString;
    NSString * _appAnalyticsNotificationReceiptBaseURLString;
    NSString * _appAnalyticsSportsEventsBaseURLString;
    NSString * _authTokenAPIBaseURLString;
    NSString * _ckEdgeCachedMultiFetchBaseURLString;
    NSString * _ckEdgeCachedOrderFeedBaseURLString;
    NSString * _ckMultiFetchBaseURLString;
    NSString * _ckOrderFeedBaseURLString;
    NSString * _ckRecordFetchBaseURLString;
    NSString * _clientAPIBaseURLString;
    NSString * _fairPlayBaseURLString;
    NSString * _fineGrainedNewsletterSubscriptionBaseURLString;
    NSString * _newsletterAPIBaseURLString;
    NSString * _notificationsBaseURLString;
    NSString * _remoteDataSourceBaseURLString;
    NSString * _searchAPIBaseURLString;
    NSString * _sportsDataVisualizationAPIBaseURLString;
    NSString * _staticAssetBaseURLString;
}

@property (nonatomic, readonly) NSString *appAnalyticsAppHealthBaseURLString;
@property (nonatomic, readonly) NSString *appAnalyticsBaseURLString;
@property (nonatomic, readonly) NSString *appAnalyticsNotificationReceiptBaseURLString;
@property (nonatomic, readonly) NSString *appAnalyticsSportsEventsBaseURLString;
@property (nonatomic, readonly) NSString *authTokenAPIBaseURLString;
@property (nonatomic, readonly) NSString *ckEdgeCachedMultiFetchBaseURLString;
@property (nonatomic, readonly) NSString *ckEdgeCachedOrderFeedBaseURLString;
@property (nonatomic, readonly) NSString *ckMultiFetchBaseURLString;
@property (nonatomic, readonly) NSString *ckOrderFeedBaseURLString;
@property (nonatomic, readonly) NSString *ckRecordFetchBaseURLString;
@property (nonatomic, readonly) NSString *clientAPIBaseURLString;
@property (nonatomic, readonly) NSString *fairPlayBaseURLString;
@property (nonatomic, readonly) NSString *fineGrainedNewsletterSubscriptionBaseURLString;
@property (nonatomic, readonly) NSString *newsletterAPIBaseURLString;
@property (nonatomic, readonly) NSString *notificationsBaseURLString;
@property (nonatomic, readonly) NSString *remoteDataSourceBaseURLString;
@property (nonatomic, readonly) NSString *searchAPIBaseURLString;
@property (nonatomic, readonly) NSString *sportsDataVisualizationAPIBaseURLString;
@property (nonatomic, readonly) NSString *staticAssetBaseURLString;

- (void).cxx_destruct;
- (id)appAnalyticsAppHealthBaseURLString;
- (id)appAnalyticsBaseURLString;
- (id)appAnalyticsNotificationReceiptBaseURLString;
- (id)appAnalyticsSportsEventsBaseURLString;
- (id)authTokenAPIBaseURLString;
- (id)ckEdgeCachedMultiFetchBaseURLString;
- (id)ckEdgeCachedOrderFeedBaseURLString;
- (id)ckMultiFetchBaseURLString;
- (id)ckOrderFeedBaseURLString;
- (id)ckRecordFetchBaseURLString;
- (id)clientAPIBaseURLString;
- (id)fairPlayBaseURLString;
- (id)fineGrainedNewsletterSubscriptionBaseURLString;
- (unsigned long long)hash;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9 authTokenAPIBaseURLString:(id)arg10;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9 authTokenAPIBaseURLString:(id)arg10 sportsDataVisualizationAPIBaseURLString:(id)arg11 fineGrainedNewsletterSubscriptionBaseURLString:(id)arg12;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 appAnalyticsNotificationReceiptBaseURLString:(id)arg9 authTokenAPIBaseURLString:(id)arg10 sportsDataVisualizationAPIBaseURLString:(id)arg11 fineGrainedNewsletterSubscriptionBaseURLString:(id)arg12 appAnalyticsSportsEventsBaseURLString:(id)arg13 appAnalyticsAppHealthBaseURLString:(id)arg14 ckOrderFeedBaseURLString:(id)arg15 ckMultiFetchBaseURLString:(id)arg16 ckRecordFetchBaseURLString:(id)arg17 ckEdgeCachedOrderFeedBaseURLString:(id)arg18 ckEdgeCachedMultiFetchBaseURLString:(id)arg19;
- (bool)isEqual:(id)arg1;
- (id)newsletterAPIBaseURLString;
- (id)notificationsBaseURLString;
- (id)remoteDataSourceBaseURLString;
- (id)searchAPIBaseURLString;
- (id)sportsDataVisualizationAPIBaseURLString;
- (id)staticAssetBaseURLString;

@end
