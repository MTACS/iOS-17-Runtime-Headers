
@interface MTAlarmIntentHandler : NSObject {
    MTAlarmManager * _alarmManager;
}

@property (nonatomic, readonly) MTAlarmManager *alarmManager;

+ (id)createUserInfoWithIntentName:(id)arg1 alarmIDString:(id)arg2 time:(id)arg3 label:(id)arg4;

- (void).cxx_destruct;
- (id)alarmManager;
- (id)initWithAlarmManager:(id)arg1;

@end
