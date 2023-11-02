
@protocol MCMChildParentMapCache <NSObject>

@required

- (NSSet *)childBundleIdentifiersForParentIdentifier:(NSString *)arg1;
- (id)initWithDB:(MCMSQLiteDB *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSString *)parentIdentifierForChildIdentifier:(NSString *)arg1;

@end
