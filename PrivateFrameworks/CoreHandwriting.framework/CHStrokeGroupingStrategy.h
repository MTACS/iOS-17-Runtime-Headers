
@interface CHStrokeGroupingStrategy : NSObject {
    <CHStrokeProvider> * _strokeProvider;
}

@property (nonatomic, readonly) NSString *strategyIdentifier;
@property (nonatomic, readonly) <CHStrokeProvider> *strokeProvider;

- (void).cxx_destruct;
- (void)firstStrokeIdentifier:(id*)arg1 lastStrokeIdentifier:(id*)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5;
- (id)initWithStrokeProvider:(id)arg1;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector { double x1; double x2; })arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5;
- (id)strategyIdentifier;
- (id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2;
- (id)strokeGroupFromStrokes:(id)arg1;
- (id)strokeGroupMergingGroup:(id)arg1 withGroup:(id)arg2;
- (id)strokeProvider;
- (id)strokesForIdentifiers:(id)arg1;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(id /* block */)arg6;

@end
