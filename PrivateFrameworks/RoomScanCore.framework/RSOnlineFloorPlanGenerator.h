
@interface RSOnlineFloorPlanGenerator : RSFloorPlanGeneratorBase {
    RSKeyframeAccumulation * _accumulator;
    bool  _enableLiveDump;
    RSFloorEstimation * _floorEstimator;
    NSMutableArray * _floorPlanDebug;
    RSFloorPlan * _floorPlanForOffline;
    RSGeometryCalculation * _geometryEstimator;
    RSNonUniformHeightEstimation * _heightEstimator;
    bool  _isBayWindowRecessedAreaEnabled;
    bool  _isDoorReplaceOpeningEnabled;
    bool  _isMarkerCoachingEnabled;
    bool  _isNonUniformHeightEnabled;
    bool  _isOpendoorReplaceOpeningEnabled;
    bool  _isOpeningReplaceOpendoorEnabled;
    RSMarkerCoaching * _markerCoaching;
    RSMarkerSignal * _markerSignal;
    RSMirrorDetection * _mirrorDetector;
    RSDoorWindowOnlineDetector * _onlineDoorWindow;
    RSWallOpeningOnlineOptimizer * _onlineWallOpeningConsistency;
    RSOpeningHeightAlignment * _openingHeightAlignment;
    RSParentAssociation * _parentAssociation;
    RSProjection2DZ * _projector;
    RSRecessedAreaReconstructor * _recessedAreaReconstructor;
    RSScanUIFormatter * _scanUiFormatter;
    RSWallOpeningOnlineDetector * _wallOpeningDetector;
}

- (void).cxx_destruct;
- (void)clear;
- (void)generateFloorPlanWithInputDir:(id)arg1 outputDir:(id)arg2 debug:(bool)arg3;
- (void)generateFloorPlanWithInputPath:(id)arg1 outputPath:(id)arg2 debug:(bool)arg3;
- (id)init;

@end
