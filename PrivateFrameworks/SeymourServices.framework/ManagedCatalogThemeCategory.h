
@interface ManagedCatalogThemeCategory : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) NSSet *themes;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
