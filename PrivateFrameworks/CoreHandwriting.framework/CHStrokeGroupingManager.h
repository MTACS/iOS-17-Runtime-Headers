
@interface CHStrokeGroupingManager : NSObject {
    NSDictionary * _groupingStrategiesByIdentifierForTextStrokeClasses;
    bool  _isInlineContinuousMode;
    NSArray * _locales;
    CHRecognitionSessionResult * _sessionLastResult;
    <CHStrokeProvider> * _strokeProvider;
    NSArray * _textInputTargets;
}

@property (nonatomic, readonly) bool isInlineContinuousMode;
@property (nonatomic, readonly) NSArray *locales;
@property (nonatomic, readonly) CHRecognitionSessionResult *sessionLastResult;
@property (nonatomic, readonly) <CHStrokeProvider> *strokeProvider;
@property (nonatomic, readonly) NSArray *textInputTargets;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3 isInlineContinuousMode:(bool)arg4 inlineContinuousModeTargets:(id)arg5;
- (bool)isInlineContinuousMode;
- (id)locales;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector { double x1; double x2; })arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5;
- (id)sessionLastResult;
- (id)strokeProvider;
- (id)strokesForIdentifiers:(id)arg1;
- (id)textInputTargets;
- (id)updatedGroupingResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 orderedStrokeIdentifiers:(id)arg3 strokeClassificationResult:(id)arg4 cancellationBlock:(id /* block */)arg5;

@end
