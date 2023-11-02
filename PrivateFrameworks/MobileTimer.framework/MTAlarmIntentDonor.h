
@interface MTAlarmIntentDonor : NSObject <MTAlarmObserver> {
    NSMutableDictionary * _alarmsByID;
    <NAScheduler> * _serializer;
    MTAlarmStorage * _storage;
}

@property (nonatomic, readonly) NSMutableDictionary *alarmsByID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTAlarmStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alarmsByID;
- (id)initWithStorage:(id)arg1;
- (void)prepareAlarms;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)storage;

@end
