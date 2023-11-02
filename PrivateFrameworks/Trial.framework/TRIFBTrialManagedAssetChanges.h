
@interface TRIFBTrialManagedAssetChanges : NSObject {
    unsigned char  _changeTypeAssetId;
    unsigned char  _changeTypeAssetName;
    unsigned char  _changeTypeCloudKitMetadata;
    unsigned char  _changeTypeDownloadSize;
    unsigned char  _changeTypeFileType;
    unsigned char  _changeTypeHasOnDemandFlag;
    unsigned char  _changeTypeIsOnDemand;
    unsigned char  _changeTypePath;
    unsigned int  _replacementAssetId;
    unsigned int  _replacementAssetName;
    unsigned int  _replacementCloudKitMetadata;
    unsigned char  _replacementCloudKitMetadataType;
    unsigned long long  _replacementDownloadSize;
    unsigned char  _replacementFileType;
    bool  _replacementHasOnDemandFlag;
    bool  _replacementIsOnDemand;
    unsigned int  _replacementPath;
}

- (void)omitAssetName;
- (void)omitDownloadSize;
- (void)omitFileType;
- (void)omitHasOnDemandFlag;
- (void)omitIsOnDemand;
- (void)omitPath;
- (void)preserveAssetId;
- (void)preserveAssetName;
- (void)preserveCloudKitMetadata;
- (void)preserveDownloadSize;
- (void)preserveFileType;
- (void)preserveHasOnDemandFlag;
- (void)preserveIsOnDemand;
- (void)preservePath;
- (void)replaceAssetId:(id)arg1;
- (void)replaceAssetName:(id)arg1;
- (void)replaceCloudKitMetadataWithAsset:(id)arg1;
- (void)replaceCloudKitMetadataWithTreatment:(id)arg1;
- (void)replaceDownloadSize:(unsigned long long)arg1;
- (void)replaceFileType:(unsigned char)arg1;
- (void)replaceHasOnDemandFlag:(bool)arg1;
- (void)replaceIsOnDemand:(bool)arg1;
- (void)replacePath:(id)arg1;

@end
