
@interface HAENotificationCenterManager : NSObject {
    NSObject<OS_dispatch_queue> * _eventQueue;
    double  _liveThresholdInDBA;
    NotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_semaphore> * _sem;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addHAENotificationEvent:(id)arg1;
- (void)donateSignalToTipsKit:(id)arg1;
- (id)init;
- (id)sendBannerNotificationWithEvent:(id)arg1 volumeLoweringAction:(unsigned int)arg2;
- (id)sendLiveExposureEvent:(id)arg1 volumeLoweringAction:(unsigned int)arg2;
- (id)sendWeeklyExposureEvent:(id)arg1 volumeLoweringAction:(unsigned int)arg2;

@end
