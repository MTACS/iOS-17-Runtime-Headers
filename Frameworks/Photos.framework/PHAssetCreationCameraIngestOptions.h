
@interface PHAssetCreationCameraIngestOptions : NSObject <NSCopying> {
    NSString * _cameraMetadataPath;
    NSString * _dbgFilePath;
    double  _finalAssetHeight;
    double  _finalAssetWidth;
    bool  _isRearFacingCamera;
    NSString * _photoIrisAssetUUID;
}

@property (nonatomic, copy) NSString *cameraMetadataPath;
@property (nonatomic, copy) NSString *dbgFilePath;
@property (nonatomic) double finalAssetHeight;
@property (nonatomic) double finalAssetWidth;
@property (nonatomic) bool isRearFacingCamera;
@property (nonatomic, copy) NSString *photoIrisAssetUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cameraMetadataPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dbgFilePath;
- (void)encodeToXPCDict:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)finalAssetHeight;
- (double)finalAssetWidth;
- (id)initFromJobDictionary:(id)arg1;
- (id)initWithCameraMetadataPath:(id)arg1 isCameraRearFacing:(bool)arg2 finalAssetHeight:(double)arg3 finalAssetWidth:(double)arg4 dbgFilePath:(id)arg5 photoIrisAssetUUID:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (bool)isRearFacingCamera;
- (id)photoIrisAssetUUID;
- (void)setCameraMetadataPath:(id)arg1;
- (void)setDbgFilePath:(id)arg1;
- (void)setFinalAssetHeight:(double)arg1;
- (void)setFinalAssetWidth:(double)arg1;
- (void)setIsRearFacingCamera:(bool)arg1;
- (void)setPhotoIrisAssetUUID:(id)arg1;

@end
