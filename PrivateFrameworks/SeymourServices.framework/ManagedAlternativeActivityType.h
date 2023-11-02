
@interface ManagedAlternativeActivityType : NSManagedObject

@property (nonatomic, copy) NSString *alternativeActivityType;
@property (nonatomic, retain) NSSet *modalityReference;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
