
@interface PHAWallpaperGalleryDemoHelper : NSObject {
    NSDictionary * _config;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
}

+ (id)_sampleDemoConifg;
+ (id)_shuffleConfig;
+ (id)_suggestedPhotoConfig;

- (void).cxx_destruct;
- (id)_demoShuffleDescriptors;
- (id)_demoSuggestedPhotoDescriptors;
- (id)_descriptorConfigsFromDictionaries:(id)arg1;
- (id)_fetchWallpaperSuggestionWithKeyAssetUUID:(id)arg1;
- (id)demoDescriptors;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;

@end
