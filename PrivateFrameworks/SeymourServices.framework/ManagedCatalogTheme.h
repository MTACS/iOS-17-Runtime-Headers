
@interface ManagedCatalogTheme : NSManagedObject

@property (nonatomic, retain) ManagedCatalogThemeCategory *category;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
