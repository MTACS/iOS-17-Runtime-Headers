
@interface ManagedCommentaryEvent : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, copy) NSString *topicIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
