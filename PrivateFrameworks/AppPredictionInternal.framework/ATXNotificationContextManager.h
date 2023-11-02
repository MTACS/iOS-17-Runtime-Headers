
@interface ATXNotificationContextManager : NSObject {
    _ATXAppLaunchHistogram * _appHistory;
    ATXNotificationsContentAnalyzer * _contentanalyzer;
    ATXLocationManager * _locationmanager;
    ATXMotionManagerWrapper * _motionmanager;
    _ATXAppLaunchCategoricalHistogram * _notificationsHistory;
}

+ (void)appendContentFeaturesToMetadata:(id)arg1 features:(id)arg2;
+ (void)appendLocationToMetadata:(id)arg1 locationType:(id)arg2 visits:(unsigned long long)arg3;
+ (void)appendMotionToMetadata:(id)arg1 motion:(id)arg2;
+ (void)appendNotificationHistoryToMetadata:(id)arg1 history:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)appendContextToMetadata:(id)arg1;
- (id)getNotificationHistoryForApp:(id)arg1;
- (id)init;

@end
