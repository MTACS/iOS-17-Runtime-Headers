
@protocol EDSearchableIndexSchedulable <NSObject>

@required

- (NSString *)indexName;
- (bool)isDataSourceIndexingPermitted;
- (bool)isPluggedIn;
- (unsigned long long)pendingIndexItemsCount;
- (void)setDataSourceIndexingPermitted:(bool)arg1;

@end
