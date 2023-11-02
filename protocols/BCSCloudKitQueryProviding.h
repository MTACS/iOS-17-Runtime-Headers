
@protocol BCSCloudKitQueryProviding <NSObject>

@required

- (CKQuery *)queryForFetchConfigItemWithType:(long long)arg1;
- (CKQuery *)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;
- (CKQuery *)queryForFetchShardIdentifier:(id <BCSShardItemIdentifying>)arg1;

@end
