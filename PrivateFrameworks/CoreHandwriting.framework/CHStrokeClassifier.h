
@interface CHStrokeClassifier : NSObject {
    CHStrokeClassificationResult * _strokeClassificationLastResult;
    <CHStrokeProvider> * _strokeProvider;
    bool  _textOnly;
}

@property (nonatomic, readonly) CHStrokeClassificationResult *strokeClassificationLastResult;
@property (nonatomic, readonly) <CHStrokeProvider> *strokeProvider;
@property (nonatomic, readonly) bool textOnly;

+ (double)containerSupportForPoints:(const void*)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)nonTextCandidateForStroke:(id)arg1 withSubstrokes:(id)arg2;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)arg1 strokeClassificationLastResult:(id)arg2 textOnly:(bool)arg3;
- (id)refineStrokeClassificationResultUsingClassificationResult:(id)arg1 strokeClassificationModel:(id)arg2 sortedAddedStrokes:(id)arg3 removedStrokeIdentifiers:(id)arg4 cancellationBlock:(id /* block */)arg5;
- (id)refineStrokeClassificationResultUsingClassificationResultScript:(id)arg1 strokeClassificationModel:(id)arg2 sortedAddedStrokes:(id)arg3 removedStrokeIdentifiers:(id)arg4 cancellationBlock:(id /* block */)arg5;
- (id)strokeClassificationLastResult;
- (id)strokeProvider;
- (bool)textOnly;
- (id)updatedStrokeClassificationResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 clutterFilter:(id)arg3 affectedClutterStrokeIDs:(id)arg4 cancellationBlock:(id /* block */)arg5;

@end
