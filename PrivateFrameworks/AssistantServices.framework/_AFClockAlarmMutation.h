
@interface _AFClockAlarmMutation : NSObject <AFClockAlarmMutating> {
    NSUUID * _alarmID;
    NSURL * _alarmURL;
    AFClockAlarm * _base;
    NSDate * _dismissedDate;
    NSDate * _firedDate;
    unsigned long long  _hour;
    bool  _isEnabled;
    bool  _isFiring;
    bool  _isSnoozed;
    NSDate * _lastModifiedDate;
    unsigned long long  _minute;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAlarmID : 1; 
        unsigned int hasAlarmURL : 1; 
        unsigned int hasIsFiring : 1; 
        unsigned int hasTitle : 1; 
        unsigned int hasType : 1; 
        unsigned int hasHour : 1; 
        unsigned int hasMinute : 1; 
        unsigned int hasRepeatOptions : 1; 
        unsigned int hasIsEnabled : 1; 
        unsigned int hasIsSnoozed : 1; 
        unsigned int hasFiredDate : 1; 
        unsigned int hasDismissedDate : 1; 
        unsigned int hasLastModifiedDate : 1; 
    }  _mutationFlags;
    unsigned long long  _repeatOptions;
    NSString * _title;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAlarmID;
- (id)getAlarmURL;
- (id)getDismissedDate;
- (id)getFiredDate;
- (unsigned long long)getHour;
- (bool)getIsEnabled;
- (bool)getIsFiring;
- (bool)getIsSnoozed;
- (id)getLastModifiedDate;
- (unsigned long long)getMinute;
- (unsigned long long)getRepeatOptions;
- (id)getTitle;
- (unsigned long long)getType;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAlarmID:(id)arg1;
- (void)setAlarmURL:(id)arg1;
- (void)setDismissedDate:(id)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsFiring:(bool)arg1;
- (void)setIsSnoozed:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setRepeatOptions:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;

@end
