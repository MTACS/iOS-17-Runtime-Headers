
@interface WorkflowEditor.WorkflowEditorOptions : NSObject <WFActionDrawerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _auxiliaryBarVisibility;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _canShowEmptyState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _canShowInputAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _home;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isEditingVariable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isExplicitlyReadOnly;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _parameterEditingHint;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _parameterSelectionState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _scrollingBehavior;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _triggerInputType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _variableEditingState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _variablePickingState;
    void auxiliaryViewPresenter;
    void canvasWidth;
    void coordinateSpaceDelegate;
    void editorDelegate;
    void onActionParameterStateChange;
    void onSavePendingChanges;
    void onScrollToAction;
    void pendingScrollParameters;
}

- (void).cxx_destruct;
- (double)actionCanvasWidth;
- (void)appendAction:(id)arg1;
- (id)init;
- (void)presentDrawerViewController:(id)arg1 inPopover:(bool)arg2 withSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
