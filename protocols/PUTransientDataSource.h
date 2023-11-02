
@protocol PUTransientDataSource <NSObject>

@required

- (void)registerChangeObserver:(id <PUTransientDataSourceChangeObserver>)arg1;
- (NSDictionary *)transientAssetMapping;
- (NSDictionary *)transientBurstMapping;
- (void)unregisterChangeObserver:(id <PUTransientDataSourceChangeObserver>)arg1;
- (NSArray *)uuids;

@end
