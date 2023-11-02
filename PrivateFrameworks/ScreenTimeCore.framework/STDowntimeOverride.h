
@interface STDowntimeOverride : NSObject <NSCopying> {
    NSCalendar * _calendar;
    NSDate * _creationDate;
    NSDate * _endDate;
    long long  _state;
    long long  _type;
}

@property (readonly, copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDate *endDate;
@property (readonly) long long state;
@property (readonly) long long type;

+ (id)overrideWithState:(long long)arg1 creationDate:(id)arg2 calendar:(id)arg3 endDate:(id)arg4;
+ (id)overrideWithState:(long long)arg1 creationDate:(id)arg2 calendar:(id)arg3 fixedDuration:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 state:(long long)arg2 creationDate:(id)arg3 calendar:(id)arg4 endDate:(id)arg5;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (bool)isActiveAtDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDowntimeOverride:(id)arg1;
- (bool)isExpiredAtDate:(id)arg1;
- (long long)modificationBasedOnScheduleChangeAtDate:(id)arg1;
- (long long)state;
- (long long)type;

@end
