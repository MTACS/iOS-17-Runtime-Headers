
@interface PKDrawingCoherence : PKDrawing {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _canvasBounds;
@property (nonatomic, readonly) NSArray *_rootStrokes;
@property (nonatomic, readonly) long long _rootStrokesCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long requiredContentVersion;
@property (nonatomic, readonly) bool shouldClearSelectionAfterStraightening;
@property (nonatomic, readonly) Class strokeClass;
@property (nonatomic, readonly) Class strokeSelectionClass;
@property (nonatomic, readonly) <PKDrawingUUID> *uuid;
@property (nonatomic, readonly) <PKDrawingVersion> *version;

+ (id)fileType;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_canvasBounds;
- (id)_rootStrokes;
- (long long)_rootStrokesCount;
- (id)_strokeForIdentifier:(id)arg1;
- (void)addNewStroke:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithoutInternalStrokes;
- (id)dataRepresentation;
- (void)deleteStrokes:(id)arg1;
- (id)drawingByApplyingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 loadNonInkingStrokes:(bool)arg2 error:(id*)arg3;
- (id)initWithDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2;
- (void)invalidateVisibleStrokes;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)newStroke;
- (long long)requiredContentVersion;
- (id)serializeTransiently;
- (id)serializeWithVersion:(long long)arg1;
- (id)setStroke:(id)arg1 hidden:(bool)arg2;
- (void)setStrokes:(id)arg1 groupID:(id)arg2;
- (void)setStrokes:(id)arg1 hidden:(bool)arg2;
- (void)setStrokes:(id)arg1 inks:(id)arg2;
- (void)set_canvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldClearSelectionAfterStraightening;
- (Class)strokeClass;
- (Class)strokeSelectionClass;
- (id)transformStrokes:(id)arg1 paths:(id)arg2 masks:(id)arg3;
- (void)transformStrokes:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 concat:(bool)arg3;
- (id)undoableAddNewStrokes:(id)arg1;
- (id)undoableDeleteStrokes:(id)arg1;
- (id)undoableSetStrokes:(id)arg1 groupID:(id)arg2 actionName:(id)arg3;
- (id)undoableSetStrokes:(id)arg1 inks:(id)arg2;
- (id)undoableTransformStrokes:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 concat:(bool)arg3;
- (id)updateFromSlicedIntersectingIndexes:(long long*)arg1 resultNewRoots:(const id*)arg2 resultUpdatedStrokes:(const id*)arg3 count:(long long)arg4;
- (void)updateStroke:(id)arg1 indexHint:(long long)arg2;
- (id)uuid;
- (id)version;
- (id)visibleStrokeForInsertingStroke:(id)arg1;

@end
