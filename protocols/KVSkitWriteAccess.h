
@protocol KVSkitWriteAccess

@required

- (bool)addVocabularyItemWithBuffer:(NSData *)arg1 originAppId:(NSString *)arg2 recordId:(NSUUID *)arg3 error:(id*)arg4;
- (bool)isSupportedItemType:(long long)arg1;
- (bool)removeVocabularyItemWithRecordId:(NSUUID *)arg1 error:(id*)arg2;
- (bool)setTransactionLocale:(long long)arg1 assetPath:(NSURL *)arg2 error:(id*)arg3;
- (bool)shouldMerge:(bool*)arg1 error:(id*)arg2;

@end
