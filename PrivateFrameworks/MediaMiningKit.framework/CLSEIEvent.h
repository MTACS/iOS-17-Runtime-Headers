
@interface CLSEIEvent : NSManagedObject

@property (nonatomic, copy) NSSet *artists;
@property (nonatomic, copy) NSSet *categories;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) double endTime;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) long long uuid;
@property (nonatomic, retain) CLSEIVenue *venue;

- (id)timeZone;

@end
