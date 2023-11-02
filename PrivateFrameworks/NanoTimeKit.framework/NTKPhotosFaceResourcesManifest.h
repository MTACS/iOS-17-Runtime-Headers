
@interface NTKPhotosFaceResourcesManifest : NTKBasePhotoResourcesManifest {
    NSString * _assetCollectionIdentifier;
}

@property (nonatomic, readonly) NSString *assetCollectionIdentifier;

- (void).cxx_destruct;
- (bool)_imageListItemContainsValidImage:(id)arg1;
- (bool)_imageListItemContainsValidIrisVideo:(id)arg1;
- (bool)_imageListItemHasValidAnalysisValues:(id)arg1;
- (bool)_imageListItemHasValidCropValues:(id)arg1;
- (id)assetCollectionIdentifier;
- (bool)didLoadRawManifest:(id)arg1;
- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
- (unsigned long long)minCompatibleVersion;
- (bool)validateImageListItem:(id)arg1 withError:(id*)arg2;

@end
