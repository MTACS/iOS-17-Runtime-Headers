
@interface TRIFBTrialManagedAsset : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef * _br;
    const struct TrialManagedAsset { unsigned char x1[1]; } * _ptr;
}

@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) const char *assetIdAsCString;
@property (nonatomic, readonly) NSData *assetIdAsData;
@property (nonatomic, readonly) NSString *assetName;
@property (nonatomic, readonly) const char *assetNameAsCString;
@property (nonatomic, readonly) NSData *assetNameAsData;
@property (nonatomic, readonly) TRIFBCloudKitAssetRecordAsset *cloudKitMetadataAsAsset;
@property (nonatomic, readonly) TRIFBCloudKitTreatmentRecordAsset *cloudKitMetadataAsTreatment;
@property (nonatomic, readonly) unsigned char cloudKitMetadataType;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) unsigned char fileType;
@property (nonatomic, readonly) bool hasDownloadSize;
@property (nonatomic, readonly) bool hasFileType;
@property (nonatomic, readonly) bool hasHasOnDemandFlag;
@property (nonatomic, readonly) bool hasIsOnDemand;
@property (nonatomic, readonly) bool hasOnDemandFlag;
@property (nonatomic, readonly) bool isOnDemand;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) const char *pathAsCString;
@property (nonatomic, readonly) NSData *pathAsData;

- (void).cxx_destruct;
- (id)assetId;
- (const char *)assetIdAsCString;
- (id)assetIdAsData;
- (id)assetName;
- (const char *)assetNameAsCString;
- (id)assetNameAsData;
- (id)cloudKitMetadataAsAsset;
- (id)cloudKitMetadataAsTreatment;
- (unsigned char)cloudKitMetadataType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1 changes:(id)arg2;
- (unsigned long long)downloadSize;
- (unsigned char)fileType;
- (bool)hasDownloadSize;
- (bool)hasFileType;
- (bool)hasHasOnDemandFlag;
- (bool)hasIsOnDemand;
- (bool)hasOnDemandFlag;
- (unsigned long long)hash;
- (id)init;
- (id)initVerifiedRootObjectFromData:(id)arg1;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2 maxDepth:(unsigned int)arg3 maxTables:(unsigned int)arg4;
- (id)initWithBufRef:(id)arg1 cppPointer:(const struct TrialManagedAsset { unsigned char x1[1]; }*)arg2;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOnDemand;
- (id)path;
- (const char *)pathAsCString;
- (id)pathAsData;
- (bool)verifyUTF8Fields;

@end
