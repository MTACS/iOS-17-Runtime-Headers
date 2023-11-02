
@interface FlexCloudKitSongAsset : FlexCloudSongAsset {
    CKRecordID * _recordID;
}

@property (nonatomic, readonly) CKRecordID *recordID;

- (void).cxx_destruct;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 recordID:(id)arg3 localURL:(id)arg4 cloudManager:(id)arg5 contentVersion:(long long)arg6 compatibilityVersion:(long long)arg7;
- (id)recordID;

@end
