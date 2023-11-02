
@interface TRIFBTrialManagedAssetBuilder : NSObject {
    struct TrialManagedAssetBuilder { struct FlatBufferBuilder {} *x1; unsigned int x2; } * _bldr;
    AFBBufferBuilder * _owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setAssetId:(id)arg1;
- (void)setAssetName:(id)arg1;
- (void)setCloudKitMetadataWithAsset:(id)arg1;
- (void)setCloudKitMetadataWithTreatment:(id)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setFileType:(unsigned char)arg1;
- (void)setHasOnDemandFlag:(bool)arg1;
- (void)setIsOnDemand:(bool)arg1;
- (void)setPath:(id)arg1;

@end
