
@interface _TtC14WorkflowEditorP33_460410A17E70035D97A591FA113148C318PresenterContainer : NSObject <WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate> {
    void coordinator;
    void onFinish;
    void onRevealAction;
    void onShowActionOutputPicker;
    void parameterEditingHint;
    void presenter;
}

- (void).cxx_destruct;
- (id)init;
- (void)moduleSummaryPresenter:(id)arg1 didCommitParameterState:(id)arg2;
- (void)moduleSummaryPresenter:(id)arg1 didStageParameterState:(id)arg2;
- (void)moduleSummaryPresenterDidFinish:(id)arg1;
- (void)revealAction:(id)arg1 preScrollHandler:(id /* block */)arg2 goBackHandler:(id /* block */)arg3 scrolledAwayHandler:(id /* block */)arg4;
- (void)showActionOutputPickerAllowingShortcutInput:(bool)arg1 variableProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showParameterEditingHint:(id)arg1;

@end
