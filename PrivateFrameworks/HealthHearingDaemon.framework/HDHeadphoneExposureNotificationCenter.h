
@interface HDHeadphoneExposureNotificationCenter : NSObject {
    HDCloudSyncManager * _cloudSyncManager;
    HAENotificationCenter * _notificationCenter;
    HDHeadphoneExposureNotificationSyncManager * _notificationSyncManager;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (void)_reportHeadphoneNotificationWithNowDate:(id)arg1 eventDuration:(double)arg2 exposureLevel:(double)arg3 exposureDuration:(double)arg4 hasPrunableData:(bool)arg5 isDeviceLocked:(bool)arg6 analyticsInfo:(id)arg7;
- (id)initWithProfile:(id)arg1 syncManager:(id)arg2;
- (id)postSevenDayDoseNotification:(id)arg1 nowDate:(id)arg2 analyticsInfo:(id)arg3 error:(id*)arg4;

@end
