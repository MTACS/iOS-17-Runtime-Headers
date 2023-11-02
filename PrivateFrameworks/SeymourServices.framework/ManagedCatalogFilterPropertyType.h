
@interface ManagedCatalogFilterPropertyType : NSManagedObject

@property (nonatomic, retain) NSSet *catalogModalityReference;
@property (nonatomic, copy) NSString *propertyType;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
