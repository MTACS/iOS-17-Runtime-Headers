
@protocol LAKeyStoreBackend <NSObject>

@required

- (bool)createGenericPasswordWithQuery:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)createKeyWithQuery:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)fetchItemWithQuery:(NSDictionary *)arg1 error:(id*)arg2;
- (NSArray *)fetchItemsWithQuery:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)removeItemsWithQuery:(NSDictionary *)arg1 error:(id*)arg2;

@end
