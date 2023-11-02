
@interface FocusSettingsUI.WatchFaceSettingsManager : NSObject <NTKFaceCollectionObserver> {
    void $__lazy_storage_$_watchNPSManager;
    void _watchFaceDomainAccessor;
    void collection;
    void faceImagesCache;
    void onLoad;
    void snapshotter;
}

- (void).cxx_destruct;
- (void)faceCollectionDidLoad:(id)arg1;
- (id)init;

@end
