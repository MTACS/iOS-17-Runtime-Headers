
@interface ManagedMediaMoment : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double startTime;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
