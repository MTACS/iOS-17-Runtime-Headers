
@interface ManagedBurnBarDisplayPreference : NSManagedObject

@property (nonatomic, copy) NSString *behavior;
@property (nonatomic, copy) NSString *modalityConstraint;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
