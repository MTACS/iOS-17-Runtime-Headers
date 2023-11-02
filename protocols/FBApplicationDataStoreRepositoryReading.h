
@protocol FBApplicationDataStoreRepositoryReading <NSObject>

@required

- (NSDictionary *)allObjectsForKeys:(NSArray *)arg1;
- (NSArray *)applicationIdentifiersWithState;
- (void)close;
- (bool)containsKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (<FBApplicationDataStoreRepositoryReadingDelegate> *)delegate;
- (NSArray *)keysForApplication:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (void)setDelegate:(id <FBApplicationDataStoreRepositoryReadingDelegate>)arg1;

@end
