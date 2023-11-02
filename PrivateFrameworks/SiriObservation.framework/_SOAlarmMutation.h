
@interface _SOAlarmMutation : NSObject <SOAlarmMutating> {
    NSUUID * _alarmID;
    NSURL * _alarmURL;
    SOAlarm * _base;
    unsigned long long  _hour;
    bool  _isEnabled;
    bool  _isFiring;
    unsigned long long  _minute;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAlarmID : 1; 
        unsigned int hasAlarmURL : 1; 
        unsigned int hasTitle : 1; 
        unsigned int hasHour : 1; 
        unsigned int hasMinute : 1; 
        unsigned int hasRepeatSchedule : 1; 
        unsigned int hasIsEnabled : 1; 
        unsigned int hasIsFiring : 1; 
    }  _mutationFlags;
    unsigned long long  _repeatSchedule;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAlarmID;
- (id)getAlarmURL;
- (unsigned long long)getHour;
- (bool)getIsEnabled;
- (bool)getIsFiring;
- (unsigned long long)getMinute;
- (unsigned long long)getRepeatSchedule;
- (id)getTitle;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAlarmID:(id)arg1;
- (void)setAlarmURL:(id)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsFiring:(bool)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setRepeatSchedule:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;

@end
