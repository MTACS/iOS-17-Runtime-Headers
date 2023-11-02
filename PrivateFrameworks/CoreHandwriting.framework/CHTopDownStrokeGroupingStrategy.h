
@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    double  _arcLengthDiffScoreCoeff;
    double  _aspectRatioWeight;
    double  _backTransitionUpperBound;
    double  _backTransitionWeight;
    double  _expectedSubstrokesPerLine;
    double  _horizontalDistanceBarrier;
    double  _horizontalDistanceWeight;
    double  _minArcLengthScore;
    double  _minLineHeightScore;
    double  _minSubstrokesForSplit;
    double  _minimumDrawingSize;
    bool  _reorderStrokes;
    double  _splitCostThreshold;
    NSString * _strategyIdentifier;
    double  _targetFitnessWeight;
    NSArray * _textInputTargets;
    double  _transitionTimeUpperBound;
    double  _transitionTimeWeight;
    double  _verticalDistanceWeight;
    double  _writingDirectionMinCoeff;
    double  _writingDirectionUpperBound;
    double  _writingDirectionWeight;
    long long  _writingOrientation;
}

@property (nonatomic, readonly) NSArray *textInputTargets;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)arg1 locale:(id)arg2 textInputTargets:(id)arg3;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector { double x1; double x2; })arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5;
- (id)strategyIdentifier;
- (id)textInputTargets;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(id /* block */)arg6;

@end
