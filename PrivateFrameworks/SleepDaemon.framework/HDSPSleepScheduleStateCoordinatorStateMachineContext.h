
@interface HDSPSleepScheduleStateCoordinatorStateMachineContext : HKSPStateMachineContext {
    bool  _isForAlarmTurnedOffWhileFiring;
    unsigned long long  _reason;
}

@property (nonatomic, readonly) bool isForAlarmTurnedOffWhileFiring;
@property (nonatomic, readonly) unsigned long long reason;

+ (id)contextForAlarmTurnedOffWhileFiring;
+ (id)contextWithReason:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isForAlarmTurnedOffWhileFiring;
- (unsigned long long)reason;

@end
