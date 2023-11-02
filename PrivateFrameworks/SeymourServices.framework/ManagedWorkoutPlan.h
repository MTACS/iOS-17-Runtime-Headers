
@interface ManagedWorkoutPlan : NSManagedObject

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) NSSet *schedule;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic) int state;
@property (nonatomic, copy) NSUUID *templateIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
