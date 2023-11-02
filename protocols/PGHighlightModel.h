
@protocol PGHighlightModel <NSObject>

@required

+ (NSArray *)fetchParentDayGroupHighlightsForDayHighlights:(NSArray *)arg1;

- (PHAssetCollection *)assetCollection;
- (<PGHighlightModelChangeRequest> *)changeRequest;
- (unsigned short)enrichmentState;
- (double)faceAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (bool)isRecent;
- (bool)isUpToDate;
- (unsigned short)kind;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (void)setEnrichmentState:(unsigned short)arg1;
- (void)setType:(unsigned short)arg1;
- (unsigned short)sharingComposition;
- (unsigned short)type;
- (NSString *)uuid;

@end
