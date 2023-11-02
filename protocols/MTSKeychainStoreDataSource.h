
@protocol MTSKeychainStoreDataSource <NSObject>

@required

- (bool)addItemWithAttributes:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)removeItemsMatchingQuery:(NSDictionary *)arg1 error:(id*)arg2;
- (id)resultMatchingQuery:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)updateItemMatchingQuery:(NSDictionary *)arg1 withAttributes:(NSDictionary *)arg2 error:(id*)arg3;

@end
