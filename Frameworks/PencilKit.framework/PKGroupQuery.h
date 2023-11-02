
@interface PKGroupQuery : PKQuery <CHQueryDelegate> {
    PKDrawing * _drawing;
    NSObject<OS_dispatch_queue> * _intersectionQueue;
    NSObject<OS_dispatch_queue> * _strokeGroupComputationQueue;
    CHStrokeGroupQuery * _strokeGroupQuery;
    NSArray * _strokeGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CHStrokeGroupQuery *strokeGroupQuery;
@property (readonly) Class superclass;

+ (id)_strokesInLine:(id)arg1 inDrawing:(id)arg2;

- (void).cxx_destruct;
- (id)_closestLineToPoint:(struct CGPoint { double x1; double x2; })arg1 isTop:(bool)arg2;
- (long long)_firstLineIndexFromInitialStrokes:(id)arg1;
- (long long)_lastLineIndexFromInitialStrokes:(id)arg1;
- (id)_lines:(id)arg1 containingStrokes:(id)arg2;
- (void)_precalculateStrokeGroupProperties:(id)arg1;
- (bool)_strokes:(id)arg1 containsAnyStrokes:(id)arg2;
- (id)_strokesAtLineIndex:(long long)arg1 containingStrokes:(id)arg2;
- (id)_strokesForIdentifiers:(id)arg1 inDrawing:(id)arg2;
- (id)_strokesInLine:(id)arg1 leftOf:(bool)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_tokenizationLevelForSelectionType:(long long)arg1;
- (long long)contentTypeForIntersectedStrokes:(id)arg1;
- (void)dealloc;
- (id)drawing;
- (id)firstStrokesInStrokes:(id)arg1 isRTL:(bool)arg2;
- (id)initWithRecognitionSessionManager:(id)arg1;
- (id)lastStrokesInStrokes:(id)arg1 isRTL:(bool)arg2;
- (void)pause;
- (void)q_fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg1 completion:(id /* block */)arg2;
- (void)q_fetchStrokesBetweenTopPoint:(struct CGPoint { double x1; double x2; })arg1 bottomPoint:(struct CGPoint { double x1; double x2; })arg2 isRTL:(bool)arg3 completion:(id /* block */)arg4;
- (void)q_fetchStrokesForPoint:(struct CGPoint { double x1; double x2; })arg1 selectionType:(long long)arg2 inputType:(long long)arg3 visibleOnscreenStrokes:(id)arg4 completion:(id /* block */)arg5;
- (void)queryDidUpdateResult:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setStrokeGroupQuery:(id)arg1;
- (void)setStrokeGroups:(id)arg1;
- (void)start;
- (id)strokeGroupQuery;
- (id)strokeGroups;
- (void)teardown;

@end
