
@interface ManagedHealthKitStandaloneMindfulSessionJob : NSManagedObject

@property (nonatomic, copy) NSString *catalogWorkoutIdentifier;
@property (nonatomic, copy) NSString *playlistIdentifier;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) NSSet *sessions;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
