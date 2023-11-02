
@interface CHTimeWindowStrokeGroupingStrategy : CHStrokeGroupingStrategy

- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector { double x1; double x2; })arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(id /* block */)arg6;

@end
