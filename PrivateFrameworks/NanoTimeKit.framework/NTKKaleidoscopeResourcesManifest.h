
@interface NTKKaleidoscopeResourcesManifest : NTKBasePhotoResourcesManifest

- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
- (unsigned long long)minCompatibleVersion;
- (bool)validateImageListItem:(id)arg1 withError:(id*)arg2;

@end
