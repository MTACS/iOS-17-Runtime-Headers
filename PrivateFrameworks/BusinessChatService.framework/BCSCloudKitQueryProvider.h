
@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_shardRecordNameForType:(long long)arg1 index:(long long)arg2 count:(long long)arg3;
- (id)_shardRecordTypeForType:(long long)arg1;
- (id)queryForFetchConfigItemWithType:(long long)arg1;
- (id)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;
- (id)queryForFetchShardIdentifier:(id)arg1;

@end
