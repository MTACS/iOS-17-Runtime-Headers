
@interface HDHeadphoneExposureNotificationAnalyticsInfo : NSObject {
    NSDate * _lastLockDate;
    NSDate * _lastNotificationDate;
}

- (void).cxx_destruct;
- (id)boundedIntegerForMinutesSinceLastUnlockWithNowDate:(id)arg1;
- (id)boundedIntegerForTimeSinceLastNotificationWithNowDate:(id)arg1;
- (id)initWithLastLockDate:(id)arg1 lastNotificationDate:(id)arg2;

@end
