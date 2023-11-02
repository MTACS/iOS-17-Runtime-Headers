
@interface AAUIAchievementResourceProvider : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_assetBundleForAchievement:(id)arg1;
- (id)_badgeModelFilenames:(id)arg1;
- (id)_cachedModelsPath;
- (id)_compressedBadgeModelPathsForAchievement:(id)arg1;
- (id)_modelDirectoryForCompressedModelPaths:(id)arg1 andAchievement:(id)arg2;
- (id)_modelFilePathsForCompressedModelPaths:(id)arg1 andAchievement:(id)arg2;
- (bool)_queue_decompressZipFileAtPath:(id)arg1 toDirectory:(id)arg2;
- (id)backSideIconImageForAchievement:(id)arg1;
- (id)badgeConfigurationForAchievement:(id)arg1;
- (id)badgeModelPathsForAchievement:(id)arg1;
- (id)enamelColorForAchievement:(id)arg1;
- (struct CGPoint { double x1; double x2; })glyphPositionOffsetScaleForAchievement:(id)arg1;
- (id)glyphTexturePathForAchievement:(id)arg1;
- (double)glyphTextureScaleForAchievement:(id)arg1;
- (id)init;
- (id)metalColorForAchievement:(id)arg1;
- (id)stickerURLsForAchievement:(id)arg1;
- (id)stickersBundlePathForAchievement:(id)arg1;
- (id)texturePathsForAchievement:(id)arg1;

@end
