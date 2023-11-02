
@interface DNDMutableScheduleTime : DNDScheduleTime

@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;

@end
