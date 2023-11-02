
@interface PXStoryTimelineVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider> {
    PXStoryConfiguration * _configuration;
    PXStoryVisualDiagnosticsProviderHelper * _helper;
    PXStoryModel * _model;
    PXStoryAutoEditMomentsProvider * _momentsProvider;
    PXStoryResourcesDataSource * _resourcesDataSource;
    double  _screenScale;
    <PXStoryTimeline> * _timeline;
}

@property (nonatomic, readonly) PXStoryConfiguration *configuration;
@property (nonatomic, readonly) PXStoryVisualDiagnosticsProviderHelper *helper;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) PXStoryAutoEditMomentsProvider *momentsProvider;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) <PXStoryTimeline> *timeline;

- (void).cxx_destruct;
- (void)_addAssetsDetailsTable:(id)arg1;
- (void)_addCinematicDiagnostics:(id)arg1;
- (void)_addCoverPage:(id)arg1;
- (void)_addCropDiagnostics:(id)arg1;
- (void)_addDetailedSaliencyDiagnostics:(id)arg1;
- (void)_addMiscellaneousDiagnostics:(id)arg1;
- (void)_addSegmentDiagnostics:(id)arg1;
- (void)_addSegmentsAutoEditDebugInfoTables:(id)arg1 debugInfoKeys:(id)arg2;
- (void)_addSegmentsDetailsTable:(id)arg1;
- (unsigned long long)_approxLinesInString:(id)arg1 lineLength:(unsigned long long)arg2;
- (id)_autoEditDebugInfoBySegmentInTimeline:(id)arg1;
- (id)_descriptionForDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; long long x_4_1_2; } x4; BOOL x5; })arg1;
- (id)_descriptionForFaces:(id)arg1 context:(id)arg2;
- (id)_descriptionForMovementType:(long long)arg1;
- (id)_displayStringForPrivateString:(id)arg1 context:(id)arg2;
- (void)_drawAsset:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(id)arg3;
- (void)_drawSegmentAtIndex:(long long)arg1 timeline:(id)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 options:(unsigned long long)arg4 context:(id)arg5;
- (void)_drawVerticalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 context:(id)arg3 configuration:(id /* block */)arg4;
- (id)_moduleDescriptionsBySegmentInTimeline:(id)arg1;
- (id)_moduleStartSegmentIndexesInTimeline:(id)arg1;
- (id)_momentEndSegmentIndexesInTimeline:(id)arg1;
- (id)_movementDescriptionForSegmentAtIndex:(long long)arg1 inTimeline:(id)arg2;
- (id)_segmentIndexesWithInvalidOrderOutTransitionInTimeline:(id)arg1;
- (id)_tvPreviewRankByAssetUUIDForMemory:(id)arg1;
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)configuration;
- (id)helper;
- (id)init;
- (id)initWithModel:(id)arg1 screenScale:(double)arg2;
- (id)model;
- (id)momentsProvider;
- (id)resourcesDataSource;
- (double)screenScale;
- (id)timeline;

@end
