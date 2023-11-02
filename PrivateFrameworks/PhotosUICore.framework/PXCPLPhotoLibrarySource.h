
@interface PXCPLPhotoLibrarySource : PXObservable {
    bool  _isCloudPhotosEnabled;
    bool  _isLocalModeEnabled;
    bool  _isRebuildingThumbnails;
    long long  _percentCompletedForRebuild;
    PHPhotoLibrary * _photoLibrary;
    NSProgress * _postOpenProgress;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) float fractionCompletedForRebuild;
@property (nonatomic) bool isCloudPhotosEnabled;
@property (nonatomic) bool isLocalModeEnabled;
@property (nonatomic) bool isRebuildingThumbnails;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (retain) NSProgress *postOpenProgress;

- (void).cxx_destruct;
- (void)_queue_subscribeToPostOpenProgressForPhotoLibrary:(id)arg1;
- (void)_removePostOpenProgressObserverIfNeeded;
- (void)_updateFractionCompletedForRebuild;
- (void)_updateIsCloudPhotosEnabled;
- (void)_updateIsLocalModeEnabled;
- (void)_updateIsRebuildingThumbnails;
- (void)accountDidChange:(id)arg1;
- (void)dealloc;
- (float)fractionCompletedForRebuild;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isCloudPhotosEnabled;
- (bool)isLocalModeEnabled;
- (bool)isRebuildingThumbnails;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)photoLibrary;
- (id)postOpenProgress;
- (void)setFractionCompletedForRebuild:(float)arg1;
- (void)setIsCloudPhotosEnabled:(bool)arg1;
- (void)setIsLocalModeEnabled:(bool)arg1;
- (void)setIsRebuildingThumbnails:(bool)arg1;
- (void)setPostOpenProgress:(id)arg1;

@end
