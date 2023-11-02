
@interface PUImagePickerSessionInfo : PUSessionInfo {
    bool  _isLimitedLibraryPicker;
    PHCollectionList * _rootCollectionList;
}

@property (nonatomic, retain) PHCollectionList *rootCollectionList;

- (void).cxx_destruct;
- (id)initWithPhotosViewDelegate:(id)arg1 loadingStatusManager:(id)arg2 allowMultipleSelection:(bool)arg3 limitedLibrary:(bool)arg4;
- (bool)isForAssetPicker;
- (bool)isLimitedLibraryPicker;
- (bool)isSelectingAssets;
- (id)rootCollectionList;
- (void)setRootCollectionList:(id)arg1;

@end
