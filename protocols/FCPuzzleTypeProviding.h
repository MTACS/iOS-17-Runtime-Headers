
@protocol FCPuzzleTypeProviding <NSObject, NFCopying, FCTagProviding, FCFeedTheming>

@required

- (FCColor *)darkStylePuzzlePrimaryColor;
- (FCColor *)darkStyleThemeColor;
- (NSString *)engineResourceID;
- (FCAssetHandle *)exploreTileImageAssetHandle;
- (NSString *)identifier;
- (NSArray *)latestPuzzleIDs;
- (NSString *)nameForSharing;
- (FCAssetHandle *)nameImageAssetHandle;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
- (FCAssetHandle *)nameImageMaskAssetHandle;
- (NSArray *)promotedPuzzleIDs;
- (FCColor *)puzzlePrimaryColor;
- (FCColor *)themeColor;
- (<FCPuzzleTypeThumbnailDirectoryType> *)thumbnailDirectory;

@end
