
@interface PXSmartAlbumCameraModelCondition : PXSmartAlbumEXIFCondition {
    NSArray * _cameraModels;
}

@property (nonatomic, retain) NSString *cameraModel;
@property (nonatomic, readonly) NSArray *cameraModels;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)cameraModel;
- (id)cameraModels;
- (void)setCameraModel:(id)arg1;

@end
