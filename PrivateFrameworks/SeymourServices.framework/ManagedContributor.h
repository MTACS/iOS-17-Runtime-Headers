
@interface ManagedContributor : NSManagedObject

@property (nonatomic, copy) NSString *bio;
@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, retain) NSSet *socialMediaHandles;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
