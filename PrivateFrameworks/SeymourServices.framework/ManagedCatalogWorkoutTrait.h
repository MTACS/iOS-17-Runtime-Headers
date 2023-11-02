
@interface ManagedCatalogWorkoutTrait : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutReference;
@property (nonatomic, copy) NSString *trait;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
