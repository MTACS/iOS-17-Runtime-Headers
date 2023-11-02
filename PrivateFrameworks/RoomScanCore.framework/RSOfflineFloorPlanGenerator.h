
@interface RSOfflineFloorPlanGenerator : RSFloorPlanGeneratorBase {
    RSOfflineKeyframeAccumulation * _accumulator;
    RSBayWindowFPRemoval * _baywindowFPRemoval;
    RSCurvedWallDetection * _curvedWallDetector;
    NSMutableDictionary * _debugInfo;
    RSDeduplicateOpeningOpenDoor * _deduplicateOpeningOpenDoor;
    RSDoorWindowOfflineDetector * _doorWindowDetector;
    RSDoorWindowPostProcessor * _doorWindowPostProcessor;
    bool  _enableOfflineDump;
    RSFloorEstimation * _floorEstimator;
    RSOfflineGeometryCalculation * _geometryEstimator;
    RSNonUniformHeightEstimation * _heightEstimator;
    RSOnlineOfflineAssociation * _onlineOfflineAssociation;
    bool  _opendoorReplaceOpeningEnabled;
    RSOpeningHeightAlignment * _openingHeightAlignment;
    bool  _openingReplaceOpendoorEnabled;
    RSOfflineProjection2DZNode * _projector;
    RSOutsideObjectRemoval * _removeOutsideObject;
    RSRoomTypeGenerator * _roomNodeGenerator;
    bool  _roomTypeEnabled;
    RSStructurePostProcess * _structurePostprocess;
    RSWallOpeningOfflineDetector * _wallOpeningDetector;
    bool  _wallOpeningMergeEnabled;
}

- (void).cxx_destruct;
- (void)clear;
- (void)generateFloorPlanWithInputPath:(id)arg1 outputPath:(id)arg2 debug:(bool)arg3;
- (id)init;

@end
