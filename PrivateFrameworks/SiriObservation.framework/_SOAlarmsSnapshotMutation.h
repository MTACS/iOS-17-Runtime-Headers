
@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating> {
    NSDictionary * _alarmsByID;
    SOAlarmsSnapshot * _base;
    NSDate * _date;
    NSOrderedSet * _dismissedAlarmIDs;
    NSOrderedSet * _firingAlarmIDs;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasDate : 1; 
        unsigned int hasAlarmsByID : 1; 
        unsigned int hasFiringAlarmIDs : 1; 
        unsigned int hasDismissedAlarmIDs : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAlarmsByID;
- (id)getDate;
- (id)getDismissedAlarmIDs;
- (id)getFiringAlarmIDs;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAlarmsByID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDismissedAlarmIDs:(id)arg1;
- (void)setFiringAlarmIDs:(id)arg1;

@end
