
@protocol JFXEffectPreviewManagerDelegate <NSObject>

@optional

- (void)effectPreviewManager:(JFXEffectPreviewManager *)arg1 didFinishDownloadingPreviewAssetsForEffect:(JFXEffect *)arg2 wasCancelled:(bool)arg3 error:(NSError *)arg4;
- (void)effectPreviewManager:(JFXEffectPreviewManager *)arg1 didUpdateContinousPreviewsForEffectIDs:(NSArray *)arg2;
- (void)effectPreviewManager:(JFXEffectPreviewManager *)arg1 downloadingPreviewAssetsForEffect:(JFXEffect *)arg2 progress:(double)arg3;
- (void)effectPreviewManager:(JFXEffectPreviewManager *)arg1 willBeginDownloadingPreviewAssetsForEffect:(JFXEffect *)arg2;
- (bool)previewIsHDR;

@end
