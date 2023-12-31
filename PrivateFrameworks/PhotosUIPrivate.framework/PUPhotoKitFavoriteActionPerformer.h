
@interface PUPhotoKitFavoriteActionPerformer : PUPhotoKitActionPerformer {
    bool  _favorite;
}

@property (nonatomic) bool favorite;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (bool)favorite;
- (void)performBackgroundTask;
- (void)setFavorite:(bool)arg1;

@end
