
@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor {
    NSString * _albumIdentifier;
    NSString * _albumName;
    bool  _albumNameValid;
}

@property (nonatomic, retain) NSString *albumIdentifier;
@property (nonatomic, readonly) NSString *albumName;
@property (nonatomic) bool shouldFinalize;

- (void).cxx_destruct;
- (id)_createResourceDirectoryForSinglePHAssetWithPreviewOnly:(bool)arg1;
- (id)_fetchAlbumName;
- (id)_fetchSingleAsset;
- (id)albumIdentifier;
- (id)albumName;
- (void)finalizeWithCompletion:(id /* block */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(bool)arg3;
- (id)optionsForSingleAsset;
- (void)setAlbumIdentifier:(id)arg1;
- (void)setShouldFinalize:(bool)arg1;
- (bool)shouldFinalize;

@end
