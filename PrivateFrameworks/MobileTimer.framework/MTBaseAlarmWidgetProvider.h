
@interface MTBaseAlarmWidgetProvider : NSObject <MTAlarmObserver> {
    <MTAlarmStorage> * _alarmStorage;
    NSDate * _lastReloadRequestDate;
    NSTimer * _reloadTimer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) <MTAlarmStorage> *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastReloadRequestDate;
@property (nonatomic, retain) NSTimer *reloadTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alarmStorage;
- (id)broadcastWidgetTimelineReload;
- (bool)bypassReloadForAlarm:(id)arg1;
- (bool)bypassReloadForAlarms:(id)arg1;
- (void)donateNewAlarmsToSmartStack:(id)arg1;
- (void)handleSystemReady;
- (id)initWithAlarmStorage:(id)arg1;
- (id)lastReloadRequestDate;
- (void)reloadTimeline;
- (id)reloadTimer;
- (id)serialQueue;
- (void)setLastReloadRequestDate:(id)arg1;
- (void)setReloadTimer:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;

@end
