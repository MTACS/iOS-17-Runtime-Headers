
@interface SSWishlistDatabaseSchema : NSObject

+ (void)_migrate7000to7001InDatabase:(id)arg1;
+ (void)_migrate7001to7002InDatabase:(id)arg1;
+ (void)createSchemaInDatabase:(id)arg1;
+ (id)databasePathWithAccountIdentifier:(long long)arg1;

@end
