
@interface WBSWebExtensionAlarmState : NSObject {
    NSMutableDictionary * _alarms;
}

+ (id)_alarmInfoWithName:(id)arg1 alarmInfo:(id)arg2;

- (void).cxx_destruct;
- (void)clearAlarmWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createAlarmWithName:(id)arg1 alarmInfo:(id)arg2 extension:(id)arg3;
- (void)getAlarmWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllAlarmsWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateAlarms;

@end
