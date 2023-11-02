
@interface PXSmartAlbumPhotoKitEditingContext : NSObject <PXSmartAlbumEditingContext> {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) NSArray *albumValues;
@property (nonatomic, readonly) NSArray *cameraModels;
@property (nonatomic, readonly) NSArray *conditionTypeValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keywordValues;
@property (nonatomic, readonly) NSArray *lensModels;
@property (nonatomic, readonly) NSArray *personNames;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ISOValuesWithFormatter:(id)arg1;
- (id)albumValues;
- (id)apertureValuesWithFormatter:(id)arg1;
- (id)cameraModels;
- (id)conditionTypeValues;
- (id)focalLengthValuesWithFormatter:(id)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keywordValues;
- (id)lensModels;
- (id)personNames;
- (id)photoLibrary;
- (id)shutterSpeedValuesWithFormatter:(id)arg1;

@end
