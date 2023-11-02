
@interface TSAnalyticsReferral : NSObject {
    void appOpenedByUserActivity;
    void appSessionStartMethod;
    void appSessionStartNotificationType;
    void campaignID;
    void campaignType;
    void creativeID;
    void referringApplication;
    void referringURL;
    void userActivityType;
    void widgetEngagement;
    void widgetModeGroupID;
}

@property (nonatomic, readonly) bool appOpenedByUserActivity;
@property (nonatomic, readonly) int appSessionStartMethod;
@property (nonatomic, readonly) int appSessionStartNotificationType;
@property (nonatomic, readonly) NSString *campaignID;
@property (nonatomic, readonly) NSString *campaignType;
@property (nonatomic, readonly) NSString *creativeID;
@property (nonatomic, readonly) NSString *referringApplication;
@property (nonatomic, readonly) NSString *referringURL;
@property (nonatomic, readonly) NSString *userActivityType;
@property (nonatomic, readonly) NTPBWidgetEngagement *widgetEngagement;
@property (nonatomic, readonly) NSString *widgetModeGroupID;

- (void).cxx_destruct;
- (bool)appOpenedByUserActivity;
- (int)appSessionStartMethod;
- (int)appSessionStartNotificationType;
- (id)campaignID;
- (id)campaignType;
- (id)creativeID;
- (id)init;
- (id)initWithUserActivityType:(id)arg1 creativeID:(id)arg2 campaignID:(id)arg3 campaignType:(id)arg4 referringApplication:(id)arg5 referringURL:(id)arg6 widgetModeGroupID:(id)arg7 widgetEngagement:(id)arg8 appOpenedByUserActivity:(bool)arg9 appSessionStartMethod:(int)arg10 appSessionStartNotificationType:(int)arg11;
- (id)referringApplication;
- (id)referringURL;
- (id)userActivityType;
- (id)widgetEngagement;
- (id)widgetModeGroupID;

@end
