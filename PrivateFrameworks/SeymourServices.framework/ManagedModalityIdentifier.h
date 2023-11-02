
@interface ManagedModalityIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramModalities;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
