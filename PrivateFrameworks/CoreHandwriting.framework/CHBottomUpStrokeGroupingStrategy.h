
@interface CHBottomUpStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _defaultDeviationVector;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _defaultOrientationVector;
    long long  _groupingContextSize;
    double  _groupingMergingCostThresh;
    double  _groupingMergingEndCostLowThresh;
    double  _groupingSimilarCostThresh;
    bool  _isInlineContinuousMode;
    double  _mergeEndBelowModifier;
    double  _mergeEndDxCostCoeff;
    double  _mergeEndDyCostCoeff;
    double  _mergeEndLeftModifier;
    double  _mergeMiddleBelowModifier;
    double  _mergeMiddleDxCostCoeff;
    double  _mergeMiddleDyCostCoeff;
    bool  _shouldAdjustDeviationOfSmallGroups;
    bool  _shouldCoalesceLastSubstrokes;
    bool  _shouldLimitDefaultWritingOrientationDeviation;
    long long  _splitMaxNaturalIndexDiffThreshold;
    long long  _splitMinimumStrokeCount;
    NSString * _strategyIdentifier;
    double  _strokeDeviationCapCoeff;
    NSArray * _textInputTargets;
    long long  _textStrokeClassification;
}

@property (nonatomic, readonly) bool isInlineContinuousMode;
@property (nonatomic, readonly) NSArray *textInputTargets;

- (void).cxx_destruct;
- (struct CGVector { double x1; double x2; })clippedWritingOrientation:(struct CGVector { double x1; double x2; })arg1;
- (long long)compareDistanceInWritingSequenceOfStroke:(id)arg1 andStroke:(id)arg2 toReferenceStroke:(id)arg3;
- (void)estimateWritingDirectionAndSortSubstrokesAccordingly:(id*)arg1 averageWritingOrientation:(struct CGVector { double x1; double x2; }*)arg2 averageStrokeDeviation:(struct CGVector { double x1; double x2; }*)arg3;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; } x3; })flippedCenters:(const void*)arg1 ofSubstrokes:(id)arg2 maxStrokesGap:(long long)arg3 begnning:(bool)arg4;
- (void)getMergingEndOfLineCost:(double*)arg1 mergingEndOfLineStroke:(id*)arg2 forStroke:(id)arg3 consistingOfSubstrokes:(id)arg4 toLineGroup:(id)arg5;
- (void)getMergingMiddleOfLineCost:(double*)arg1 mergingMiddleOfLineStroke:(id*)arg2 forStroke:(id)arg3 consistingOfSubstrokes:(id)arg4 toLineGroup:(id)arg5;
- (id)initWithStrokeProvider:(id)arg1 defaultWritingOrientation:(long long)arg2 locales:(id)arg3 isInlineContinuousMode:(bool)arg4 inlineContinuousModeTargets:(id)arg5;
- (bool)isInlineContinuousMode;
- (void)mergeGroupsPostProcessing:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3 availableGroupingStrategies:(id)arg4 allowOppositeOrientations:(bool)arg5;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector { double x1; double x2; })arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5;
- (void)refineLocalWritingOrientationsForSubstrokes:(id)arg1 useCoalescedCenter:(bool)arg2;
- (bool)refineWritingOrientationAndResortSubstrokes:(id)arg1 averageWritingOrientation:(struct CGVector { double x1; double x2; }*)arg2;
- (id)regroupedStrokeGroup:(id)arg1 fromResult:(id)arg2 withAdversarialGroup:(id)arg3 allSubstrokesByStrokeIdentifier:(id)arg4 cancellationBlock:(id /* block */)arg5;
- (double)relativeOverlapOfGroup:(id)arg1 withGroup:(id)arg2;
- (void)smoothLocalWritingOrientations:(void*)arg1;
- (void)sortSubstrokesByWritingDirection:(id)arg1 averageWritingOrientation:(struct CGVector { double x1; double x2; }*)arg2;
- (id)strategyIdentifier;
- (id)strokeGroupFromStrokes:(id)arg1;
- (id)strokeGroupMergingGroup:(id)arg1 withGroup:(id)arg2;
- (id)textInputTargets;
- (id)tryRegroupingStrokesInGroup:(id)arg1 substrokePlacementsByStrokeIdentifier:(id)arg2 cancellationBlock:(id /* block */)arg3;
- (void)updateLocalStrokeDeviationsForSubstrokes:(id)arg1 averageStrokeDeviation:(struct CGVector { double x1; double x2; }*)arg2;
- (void)updateLocalWritingOrientationsForSubstrokes:(id)arg1 useCoalescedCenter:(bool)arg2;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(id /* block */)arg6;

@end
