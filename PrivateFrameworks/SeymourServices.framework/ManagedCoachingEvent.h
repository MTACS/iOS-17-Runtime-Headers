
@interface ManagedCoachingEvent : NSManagedObject

@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *intensity;
@property (nonatomic) double leadDuration;
@property (nonatomic) int rangeLowerBound;
@property (nonatomic) int rangeUpperBound;
@property (nonatomic) bool shouldShowPlus;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *type;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
