
@interface MTSKeychainStoreDataSource : NSObject <MTSKeychainStoreDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addItemWithAttributes:(id)arg1 error:(id*)arg2;
- (bool)removeItemsMatchingQuery:(id)arg1 error:(id*)arg2;
- (id)resultMatchingQuery:(id)arg1 error:(id*)arg2;
- (bool)updateItemMatchingQuery:(id)arg1 withAttributes:(id)arg2 error:(id*)arg3;

@end
