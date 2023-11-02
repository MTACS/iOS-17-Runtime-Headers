
@protocol MFMailAssetViewerHandlerDelegate <NSObject>

@required

- (void)assetViewer:(MFMailAssetViewerHandler *)arg1 editCompletedWithURL:(NSURL *)arg2;
- (void)assetViewerEditCanceled:(MFMailAssetViewerHandler *)arg1;
- (void)assetViewerSceneClosed:(MFMailAssetViewerHandler *)arg1;
- (void)assetViewerSceneLaunched:(MFMailAssetViewerHandler *)arg1;

@end
