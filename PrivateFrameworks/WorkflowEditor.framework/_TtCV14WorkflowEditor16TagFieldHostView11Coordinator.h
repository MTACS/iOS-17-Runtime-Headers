
@interface _TtCV14WorkflowEditor16TagFieldHostView11Coordinator : NSObject <WFVariableUIDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  hostView;
}

- (void).cxx_destruct;
- (id)init;
- (void)revealAction:(id)arg1 preScrollHandler:(id /* block */)arg2 goBackHandler:(id /* block */)arg3 scrolledAwayHandler:(id /* block */)arg4;
- (void)showActionOutputPickerAllowingShortcutInput:(bool)arg1 variableProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showParameterEditingHint:(id)arg1;

@end
