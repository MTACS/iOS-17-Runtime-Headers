
@protocol CLSPHAssetSupportProtocol <CLSCurationItem>

@required

- (PHAssetAestheticProperties *)aestheticProperties;
- (double)clsActivityScore;
- (CLSAssetFaceInformationSummary *)clsFaceInformationSummary;
- (short)clsInterestingAudioClassifications;
- (bool)clsIsGuestAsset;
- (bool)clsIsTragicFailure;
- (CLSAssetProcessedSignals *)clsProcessedSignals;
- (NSSet *)clsSceneClassifications;
- (unsigned long long)clsVideoFaceCount;
- (double)clsVideoScore;
- (double)clsWallpaperScore;
- (PHAssetCurationProperties *)curationProperties;
- (double)duration;
- (bool)hasAdjustments;
- (bool)isAnimatedGIF;
- (bool)isAudio;
- (bool)isHEICSequence;
- (bool)isHidden;
- (bool)isIncludedInCloudFeeds;
- (bool)isPDF;
- (bool)isPNG;
- (bool)isPSD;
- (bool)isPhoto;
- (bool)isSpatialMedia;
- (bool)isSubtype:(unsigned long long)arg1;
- (bool)isTrashed;
- (PHAssetMediaAnalysisProperties *)mediaAnalysisProperties;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (unsigned long long)reframeVariation;
- (bool)representsBurst;

@end
