
@interface PKModifyStrokesGroupIDCommand : PKUndoCommand {
    NSUUID * _groupID;
    NSUUID * _oldGroupID;
    NSArray * _strokes;
}

@property (nonatomic, readonly) NSUUID *groupID;
@property (nonatomic, readonly) NSUUID *oldGroupID;
@property (nonatomic, readonly) NSArray *strokes;

+ (id)commandForModifyingStrokes:(id)arg1 drawing:(id)arg2 groupID:(id)arg3 actionName:(id)arg4;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)applyToDrawingReturnInverted:(id)arg1;
- (id)description;
- (id)groupID;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 groupID:(id)arg4 oldGroupID:(id)arg5;
- (id)invertedInDrawing:(id)arg1;
- (id)oldGroupID;
- (id)strokes;

@end
