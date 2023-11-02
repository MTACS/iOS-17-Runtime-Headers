
@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {
    NSMutableSet * _nontextCandidates;
    NSMutableDictionary * _scriptClassificationsByStrokeIdentifier;
    NSMutableDictionary * _strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary * _substrokesByStrokeIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 scriptClassificationsByStrokeIdentifier:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 nontextCandidates:(id)arg4;
- (id)nontextCandidates;
- (id)scriptClassificationsByStrokeIdentifier;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (void)updateByAddingClutterStroke:(id)arg1;
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(bool)arg3;
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;
- (void)updateNonTextCandidatesSupportFromStroke:(id)arg1;

@end
