
@interface HMMutableUserHomeAccessScheduleRule : HMUserHomeAccessScheduleRule

@property unsigned long long daysOfTheWeek;
@property (copy) NSDateComponents *endTime;
@property (copy) NSDateComponents *startTime;
@property (copy) NSDate *validFrom;
@property (copy) NSDate *validThrough;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
