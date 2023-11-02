
@protocol AMSStorageDatabasePersistable <NSObject>

@required

- (id)initWithDatabaseEntry:(NSDictionary *)arg1;
- (NSDictionary *)serializeToDictionary;

@end
