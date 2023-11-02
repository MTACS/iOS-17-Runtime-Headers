
@interface STDowntimeConfiguration : NSObject <NSCopying> {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    long long  _currentState;
    long long  _nextState;
    NSDate * _nextStateChangeDate;
}

@property (readonly, copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *currentDate;
@property (readonly) long long currentState;
@property (readonly) long long nextState;
@property (readonly, copy) NSDate *nextStateChangeDate;

- (void).cxx_destruct;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDate;
- (long long)currentState;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCurrentState:(long long)arg1 currentDate:(id)arg2 nextState:(long long)arg3 nextStateChangeDate:(id)arg4 calendar:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDowntimeState:(id)arg1;
- (long long)nextState;
- (id)nextStateChangeDate;

@end
