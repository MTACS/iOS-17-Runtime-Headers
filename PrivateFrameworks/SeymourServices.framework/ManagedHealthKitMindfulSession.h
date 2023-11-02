
@interface ManagedHealthKitMindfulSession : NSManagedObject

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) double heartRate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *playlistIdentifier;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, retain) ManagedHealthKitStandaloneMindfulSessionJob *standaloneMindfulSessionJob;
@property (nonatomic, copy) NSDate *startDate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
