
@protocol AssetStoreProviding

@required

- (NSDictionary *)batchOfRecordsMissingAssetsWithLimit:(long long)arg1;
- (void)markTransferAsNotSuccessfullyDownloadedWithGUID:(NSString *)arg1;
- (void)updateAssetUsingRecord:(CKRecord *)arg1;

@end
