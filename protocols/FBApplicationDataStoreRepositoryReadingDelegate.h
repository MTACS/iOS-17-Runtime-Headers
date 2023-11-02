
@protocol FBApplicationDataStoreRepositoryReadingDelegate <NSObject>

@required

- (void)objectChangedForKeys:(NSArray *)arg1 application:(NSString *)arg2;
- (void)storeInvalidatedForIdentifier:(NSString *)arg1;

@end
