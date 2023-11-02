
@interface PowerUINotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    NSUserDefaults * _defaults;
    bool  _immediateCharge;
    NSString * _lastScheduledFullChargeNotificationID;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    UNUserNotificationCenter * _unCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool immediateCharge;
@property (nonatomic, retain) NSString *lastScheduledFullChargeNotificationID;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *unCenter;

+ (id)fullChargeDeadlineStringFromDate:(id)arg1;
+ (id)obcEngagedContentWithDeadline:(id)arg1 toppingOff:(bool)arg2;
+ (id)obcEngagedRequestWithDeadline:(id)arg1 isToppingOff:(bool)arg2;
+ (id)pausedNotificationContentFromDate:(id)arg1 bundle:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelNotificationRequestWithIdentifier:(id)arg1;
- (id)contentForInternalDurationPredictionWithDuration:(double)arg1 withConfidence:(double)arg2;
- (id)currentOBCEngagedNotification;
- (id)defaults;
- (id)getDeliveredNotifications;
- (bool)immediateCharge;
- (id)init;
- (bool)internalCECNotificationsDisabled;
- (id)lastScheduledFullChargeNotificationID;
- (id)log;
- (id)postCECEngagedNotificationWithDate:(id)arg1;
- (id)postCECFirstTimeNotification;
- (void)postInternalCECNotificationForChargingDates:(id)arg1;
- (id)postInternalCECNotificationWithID:(id)arg1 chargingStatus:(bool)arg2 information:(id)arg3 shouldReplace:(bool)arg4;
- (void)postInternalChargeDurationNotificationWithDuration:(double)arg1 withConfidence:(double)arg2;
- (id)postInternalChargingIntelligenceNotificationWithChargingStatus:(bool)arg1 information:(id)arg2 url:(id)arg3 validUntil:(id)arg4;
- (id)postNotificationWithRequest:(id)arg1;
- (id)postOBCEngagedNotificationWithDate:(id)arg1;
- (id)postOBCEngagedTopOffNotificationWithDate:(id)arg1;
- (id)queue;
- (void)removeAllNotifications;
- (void)removeCECNotifications;
- (void)removeCECPausedNotification;
- (void)resetAll;
- (void)setDefaults:(id)arg1;
- (void)setImmediateCharge:(bool)arg1;
- (void)setLastScheduledFullChargeNotificationID:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnCenter:(id)arg1;
- (id)unCenter;
- (void)updateOBCEngagedNotificationWithDate:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
