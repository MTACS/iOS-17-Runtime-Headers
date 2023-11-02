
@interface _AFClockAlarmSnapshotMutation : NSObject <AFClockAlarmSnapshotMutating> {
    NSDictionary * _alarmsByID;
    AFClockAlarmSnapshot * _base;
    NSDate * _date;
    unsigned long long  _generation;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasGeneration : 1; 
        unsigned int hasDate : 1; 
        unsigned int hasAlarmsByID : 1; 
        unsigned int hasNotifiedFiringAlarmIDs : 1; 
    }  _mutationFlags;
    NSOrderedSet * _notifiedFiringAlarmIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAlarmsByID;
- (id)getDate;
- (unsigned long long)getGeneration;
- (id)getNotifiedFiringAlarmIDs;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAlarmsByID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setNotifiedFiringAlarmIDs:(id)arg1;

@end
