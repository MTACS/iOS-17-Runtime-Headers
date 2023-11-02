
@interface ManagedCatalogSyncAnchor : NSManagedObject

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *token;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
