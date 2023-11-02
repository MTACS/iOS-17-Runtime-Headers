
@interface PKSliceStrokesCommand : PKModifyStrokesCommand {
    NSDictionary * _substrokes;
}

@property (nonatomic, readonly) NSDictionary *substrokes;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 substrokes:(id)arg3 strokesHidden:(id)arg4 hiding:(bool)arg5;
- (id)invertedInDrawing:(id)arg1;
- (id)substrokes;

@end
