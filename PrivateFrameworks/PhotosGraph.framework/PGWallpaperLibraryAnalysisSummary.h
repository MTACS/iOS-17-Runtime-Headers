
@interface PGWallpaperLibraryAnalysisSummary : NSObject {
    bool  _libraryIsProcessedEnough;
    double  _ratioOfAssetsAtOrAboveFaceAnalysisVersion;
    double  _ratioOfAssetsAtOrAboveSceneAnalysisVersion;
}

@property (nonatomic, readonly) bool libraryIsProcessedEnough;
@property (nonatomic, readonly) double ratioOfAssetsAtOrAboveFaceAnalysisVersion;
@property (nonatomic, readonly) double ratioOfAssetsAtOrAboveSceneAnalysisVersion;

- (id)initWithPhotoLibrary:(id)arg1;
- (bool)libraryIsProcessedEnough;
- (double)ratioOfAssetsAtOrAboveFaceAnalysisVersion;
- (double)ratioOfAssetsAtOrAboveSceneAnalysisVersion;

@end
