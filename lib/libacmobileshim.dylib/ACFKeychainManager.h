
@interface ACFKeychainManager : NSObject <ACFKeychainManagerProtocol> {
    NSString * _usedAccessGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *obtainAccessGroup;
@property (nonatomic, readonly) NSString *sharedAccessGroup;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *usedAccessGroup;

- (void)dumpResults:(id)arg1;
- (void)dumpResults:(id)arg1 printAttributes:(bool)arg2;
- (id)obtainAccessGroup;
- (bool)removeItemWithInfo:(id)arg1;
- (id)searchItemWithInfo:(id)arg1;
- (int)secAddItemWithAttributes:(id)arg1 result:(id*)arg2;
- (int)secItemCopyMatchingWithAttributes:(id)arg1 result:(id*)arg2;
- (void)setUsedAccessGroup:(id)arg1;
- (id)sharedAccessGroup;
- (int)storeItemWithInfo:(id)arg1 share:(bool)arg2 result:(id*)arg3;
- (id)universalAccessGroup;
- (id)usedAccessGroup;

@end
