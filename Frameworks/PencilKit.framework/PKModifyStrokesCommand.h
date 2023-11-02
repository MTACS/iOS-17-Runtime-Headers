
@interface PKModifyStrokesCommand : PKUndoCommand {
    bool  _hide;
    NSArray * _strokes;
}

@property (nonatomic, readonly) bool hide;
@property (nonatomic, readonly) NSArray *strokes;

+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;
+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;
+ (id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 hiding:(bool)arg3;
+ (id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2 hiding:(bool)arg3;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (bool)hide;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(bool)arg4;
- (id)invertedInDrawing:(id)arg1;
- (id)strokes;

@end
