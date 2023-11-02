
@protocol HAPSystemKeychainStore <NSObject>

@required

- (NSArray *)allKeychainItemsForType:(NSNumber *)arg1 identifier:(NSString *)arg2 syncable:(NSNumber *)arg3 error:(id*)arg4;
- (bool)deleteKeychainItem:(HAPKeychainItem *)arg1 error:(id*)arg2;
- (bool)updateKeychainItem:(HAPKeychainItem *)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;

@end
