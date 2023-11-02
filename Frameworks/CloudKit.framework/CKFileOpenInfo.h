
@interface CKFileOpenInfo : NSObject <NSSecureCoding> {
    NSString * _UUID;
    CKAssetDownloadStagingInfo * _assetDownloadStagingInfo;
    CKAssetDownloadStagingManager * _assetDownloadStagingManager;
    NSNumber * _deviceID;
    NSFileHandle * _fileHandle;
    NSNumber * _fileID;
    NSNumber * _generationID;
    NSString * _path;
    bool  _shouldReadRawEncryptedData;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (nonatomic, readonly) CKAssetDownloadStagingInfo *assetDownloadStagingInfo;
@property CKAssetDownloadStagingManager *assetDownloadStagingManager;
@property (nonatomic, readonly, copy) NSNumber *deviceID;
@property (nonatomic, readonly) NSFileHandle *fileHandle;
@property (nonatomic, readonly, copy) NSNumber *fileID;
@property (nonatomic, readonly, copy) NSNumber *generationID;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) bool shouldReadRawEncryptedData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)assetDownloadStagingInfo;
- (id)assetDownloadStagingManager;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (id)fileID;
- (id)generationID;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithUUID:(id)arg1 path:(id)arg2 deviceID:(id)arg3 fileID:(id)arg4 generationID:(id)arg5 shouldReadRawEncryptedData:(bool)arg6 fileHandle:(id)arg7 assetDownloadStagingInfo:(id)arg8;
- (id)path;
- (void)setAssetDownloadStagingManager:(id)arg1;
- (bool)shouldReadRawEncryptedData;

@end
