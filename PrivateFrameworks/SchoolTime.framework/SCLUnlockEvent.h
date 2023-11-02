
@interface SCLUnlockEvent : NSManagedObject

@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic) short duration;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) short scheduleEndHour;
@property (nonatomic) short scheduleEndMinute;
@property (nonatomic) short scheduleStartHour;
@property (nonatomic) short scheduleStartMinute;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *timeZoneName;

+ (id)fetchRequest;

@end
