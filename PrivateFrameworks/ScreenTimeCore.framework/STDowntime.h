
@interface STDowntime : NSManagedObject

@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic) bool canAskForMoreTime;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSSet *schedule;

- (void)setStartHour:(long long)arg1 startMinute:(long long)arg2 endHour:(long long)arg3 endMinute:(long long)arg4;

@end
