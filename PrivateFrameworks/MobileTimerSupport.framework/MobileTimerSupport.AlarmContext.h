
@interface MobileTimerSupport.AlarmContext : NSObject {
    void alarmId;
    void hour;
    void isFiring;
    void isSnoozed;
    void min;
    void title;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1 alarmId:(id)arg2 hour:(unsigned long long)arg3 min:(unsigned long long)arg4 isSnoozed:(bool)arg5 isFiring:(bool)arg6;

@end
