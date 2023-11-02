
@interface PHCPAnalyticsCachedPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider> {
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedProperties;
- (id)_librarySizeRange:(long long)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)registerSystemProperties:(id)arg1;

@end
