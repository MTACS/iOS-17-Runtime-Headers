
@interface ManagedTrainerEvent : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double leadDuration;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *type;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
