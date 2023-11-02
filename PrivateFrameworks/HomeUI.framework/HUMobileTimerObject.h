
@interface HUMobileTimerObject : NSObject {
    MTAlarm * _alarm;
    MTTimer * _timer;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) MTAlarm *alarm;
@property (nonatomic, readonly) MTTimer *timer;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (bool)_alarmIDsMatch:(id)arg1;
- (bool)_timerIDsMatch:(id)arg1;
- (id)alarm;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAlarm:(id)arg1;
- (id)initWithTimer:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIgnorableTimerObject;
- (id)timer;
- (id)uniqueIdentifier;

@end
