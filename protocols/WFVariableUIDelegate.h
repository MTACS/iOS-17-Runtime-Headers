
@protocol WFVariableUIDelegate <NSObject>

@required

- (void)revealAction:(void *)arg1 preScrollHandler:(void *)arg2 goBackHandler:(void *)arg3 scrolledAwayHandler:(void *)arg4; // needs 4 arg types, found 16: WFAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)showActionOutputPickerAllowingShortcutInput:(void *)arg1 variableProvider:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, <WFVariableProvider> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFVariable *, void*

@optional

- (void)showParameterEditingHint:(NSString *)arg1;
- (void)showVariableEditorWithOptions:(WFVariableEditingOptions *)arg1 fromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
