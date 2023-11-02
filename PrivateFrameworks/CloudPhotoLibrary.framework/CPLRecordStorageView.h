
@interface CPLRecordStorageView : NSObject

- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)description;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3;
- (id)recordViewWithScopedIdentifier:(id)arg1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)redactedDescription;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 record:(id*)arg3 error:(id*)arg4;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class*)arg3 error:(id*)arg4;

@end
