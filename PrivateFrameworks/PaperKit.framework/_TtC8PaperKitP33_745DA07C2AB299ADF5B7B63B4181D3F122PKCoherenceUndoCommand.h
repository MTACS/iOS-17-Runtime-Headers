
@interface _TtC8PaperKitP33_745DA07C2AB299ADF5B7B63B4181D3F122PKCoherenceUndoCommand : PKUndoCommand {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  undo;
}

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)applyToDrawingReturnInverted:(id)arg1;
- (id)init;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 changesVisibleStrokes:(bool)arg3;

@end
