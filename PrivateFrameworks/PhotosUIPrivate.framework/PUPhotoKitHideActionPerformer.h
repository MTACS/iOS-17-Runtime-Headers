
@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer {
    PUHidePhotosActionController * _hideActionController;
    bool  _isHiding;
}

@property (nonatomic, retain) PUHidePhotosActionController *hideActionController;
@property (nonatomic) bool isHiding;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)hideActionController;
- (bool)isHiding;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setHideActionController:(id)arg1;
- (void)setIsHiding:(bool)arg1;

@end
