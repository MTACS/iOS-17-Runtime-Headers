
@interface PKModifyStrokeInkCommand : PKUndoCommand {
    NSArray * _inks;
    NSArray * _oldInks;
    NSArray * _strokes;
}

@property (nonatomic, readonly) NSArray *inks;
@property (nonatomic, readonly) NSArray *oldInks;
@property (nonatomic, readonly) NSArray *strokes;

+ (id)commandForModifyingStrokes:(id)arg1 drawing:(id)arg2 inks:(id)arg3;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)applyToDrawingReturnInverted:(id)arg1;
- (id)description;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 inks:(id)arg4 oldInks:(id)arg5;
- (id)inks;
- (id)invertedInDrawing:(id)arg1;
- (id)oldInks;
- (id)strokes;

@end
