
@interface STDailySchedule : NSManagedObject

@property (nonatomic, retain) STDowntime *downtime;
@property (nonatomic) long long endHour;
@property (nonatomic) long long endMinute;
@property (nonatomic) long long startHour;
@property (nonatomic) long long startMinute;
@property (nonatomic) long long weekday;

@end
