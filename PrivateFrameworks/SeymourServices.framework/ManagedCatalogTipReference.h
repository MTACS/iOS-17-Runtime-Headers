
@interface ManagedCatalogTipReference : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *categoryIdentifiers;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
