
@protocol CKTranscriptItemLayoutProvider

@required

- (Class)chatItemClass;
- (NSString *)layoutGroupIdentifier;
- (NSCollectionLayoutEdgeSpacing *)layoutItemSpacingWithEnvironment:(CKTranscriptLayoutEnvironment *)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(NSArray *)arg3 supplementryItems:(NSArray *)arg4;
- (NSCollectionLayoutItem *)layoutItemWithEnvironment:(CKTranscriptLayoutEnvironment *)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(NSArray *)arg3;

@end
