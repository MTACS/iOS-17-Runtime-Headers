
@interface NTKBasePhotoResourcesManifest : NSObject {
    NSArray * _imageList;
    NSURL * _resourceDirectoryURL;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSArray *imageList;
@property (nonatomic, readonly) NSURL *resourceDirectoryURL;
@property (nonatomic, readonly) unsigned long long version;

+ (id)manifestForResourceDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithResourceDirectoryURL:(id)arg1;
- (bool)_loadRawManifestAtURL:(id)arg1;
- (bool)_validateImageListItem:(id)arg1 withError:(id*)arg2;
- (bool)didLoadRawManifest:(id)arg1;
- (id)imageList;
- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
- (unsigned long long)minCompatibleVersion;
- (id)resourceDirectoryURL;
- (bool)resourceWithName:(id)arg1 isValidMediaAssetOfType:(id)arg2 withMinFileSize:(unsigned long long)arg3 maxFileSize:(unsigned long long)arg4;
- (bool)resourceWithNameIsValidImage:(id)arg1;
- (bool)validateImageListItem:(id)arg1 withError:(id*)arg2;
- (bool)validateManifestWithError:(id*)arg1;
- (unsigned long long)version;

@end
