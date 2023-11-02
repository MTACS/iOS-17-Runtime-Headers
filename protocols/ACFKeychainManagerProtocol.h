
@protocol ACFKeychainManagerProtocol <NSObject>

@required

- (void)dumpResults:(id)arg1 printAttributes:(bool)arg2;
- (NSString *)obtainAccessGroup;
- (bool)removeItemWithInfo:(id)arg1;
- (id)searchItemWithInfo:(id)arg1;
- (NSString *)sharedAccessGroup;
- (int)storeItemWithInfo:(id)arg1 share:(bool)arg2 result:(id*)arg3;
- (NSString *)usedAccessGroup;

@end
