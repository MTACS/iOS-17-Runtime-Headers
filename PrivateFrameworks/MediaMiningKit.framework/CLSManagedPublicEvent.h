
@interface CLSManagedPublicEvent : NSManagedObject

@property (nonatomic) double businessItemLatitude;
@property (nonatomic) double businessItemLongitude;
@property (nonatomic) unsigned long long businessItemMuid;
@property (nonatomic, retain) NSSet *categories;
@property (nonatomic) long long expectedAttendance;
@property (nonatomic, retain) NSNumber *expectedAttendanceAsNumber;
@property (nonatomic, retain) NSDate *localEndDate;
@property (nonatomic) double localEndTime;
@property (nonatomic, retain) NSDate *localStartDate;
@property (nonatomic) double localStartTime;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *performers;
@property (nonatomic, retain) NSSet *queryLocations;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) long long timeZoneOffset;

+ (id)entityName;

- (long long)expectedAttendance;
- (void)setExpectedAttendance:(long long)arg1;
- (id)timeZone;

@end
