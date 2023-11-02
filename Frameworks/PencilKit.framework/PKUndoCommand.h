
@interface PKUndoCommand : NSObject {
    NSString * _actionName;
    bool  _changesVisibleStrokes;
    <PKDrawingUUID> * _drawingUUID;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, readonly) bool changesVisibleStrokes;
@property (nonatomic, readonly) <PKDrawingUUID> *drawingUUID;

- (void).cxx_destruct;
- (id)actionName;
- (void)applyToDrawing:(id)arg1;
- (id)applyToDrawingReturnInverted:(id)arg1;
- (bool)changesVisibleStrokes;
- (id)drawingUUID;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 changesVisibleStrokes:(bool)arg3;
- (id)inverted;
- (id)invertedInDrawing:(id)arg1;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setActionName:(id)arg1;
- (id)strokes;

@end
