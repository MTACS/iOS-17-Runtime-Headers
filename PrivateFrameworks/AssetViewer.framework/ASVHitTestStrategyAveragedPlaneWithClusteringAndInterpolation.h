
@interface ASVHitTestStrategyAveragedPlaneWithClusteringAndInterpolation : ASVHitTestStrategy {
    float  _currentPlaneHeight;
    void _currentPlaneNormal;
}

- (void)clearHistory;
- (id)decisionForHitTestOfType:(void *)arg1 atScreenPoint:(void *)arg2 inFrame:(void *)arg3 withViewportSize:(void *)arg4 assetPosition:(void *)arg5 maxDistance:(void *)arg6; // needs 6 arg types, found 4: long long, id, struct CGSize { double x1; double x2; }, float
- (id)decisionForHitTestOfType:(void *)arg1 atScreenPoint:(void *)arg2 inSession:(void *)arg3 withViewportSize:(void *)arg4 assetPosition:(void *)arg5 maxDistance:(void *)arg6; // needs 6 arg types, found 4: long long, id, struct CGSize { double x1; double x2; }, float
- (id)decisionForHitTestOfType:(void *)arg1 originalResult:(void *)arg2 atImagePoint:(void *)arg3 inFrame:(void *)arg4 withViewportSize:(void *)arg5 assetPosition:(void *)arg6 maxDistance:(void *)arg7; // needs 7 arg types, found 5: long long, id, id, struct CGSize { double x1; double x2; }, float
- (id)decisionForMovementFromOriginalResult:(void *)arg1 atImagePoint:(void *)arg2 inFrame:(void *)arg3 withViewportSize:(void *)arg4 assetPosition:(void *)arg5 maxDistance:(void *)arg6; // needs 6 arg types, found 4: id, id, struct CGSize { double x1; double x2; }, float
- (id)decisionForPlacementFromOriginalResult:(void *)arg1 afterPlacementTimeout:(void *)arg2 atImagePoint:(void *)arg3 inFrame:(void *)arg4 withViewportSize:(void *)arg5 assetPosition:(void *)arg6 maxDistance:(void *)arg7; // needs 7 arg types, found 5: id, bool, id, struct CGSize { double x1; double x2; }, float
- (bool)decisionHistoryContainsPlaneChange:(id)arg1 relativeToNewDecision:(id)arg2;
- (bool)hasFormedClusterForInitialPlacement:(float*)arg1 planeNormal:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (bool)hasFormedClusterForMovement:(float*)arg1 planeNormal:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (id)init;
- (id)interpolatedDecisionForDecision:(id)arg1;
- (id)reprojectOntoCurrentPlaneAtImagePoint:(void *)arg1 inFrame:(void *)arg2 withViewportSize:(void *)arg3 assetPosition:(void *)arg4 maxDistance:(void *)arg5; // needs 5 arg types, found 3: id, struct CGSize { double x1; double x2; }, float
- (bool)resultsContainPoorQualityEstimatedResults:(id)arg1;

@end
