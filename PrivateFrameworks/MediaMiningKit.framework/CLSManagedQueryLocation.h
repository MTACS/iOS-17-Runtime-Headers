
@interface CLSManagedQueryLocation : NSManagedObject

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSSet *publicEvents;
@property (nonatomic) double radius;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) double updateTimestamp;

+ (id)entityName;

@end
