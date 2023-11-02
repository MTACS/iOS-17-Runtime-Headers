
@interface WFModuleSummaryEditor : NSObject {
    bool  _allowsPickingVariables;
    unsigned long long  _arrayIndex;
    <WFEditorAuxiliaryViewPresenter> * _auxiliaryViewPresenter;
    <WFParameterState> * _currentState;
    <WFModuleSummaryEditorDelegate> * _delegate;
    WFVariable * _lastValueForEditingVariable;
    WFParameter<WFModuleSummarySupporting> * _parameter;
    bool  _processing;
    bool  _returnToKeyboardOnComplete;
    <WFSlotTemplateTextEntry> * _textEntry;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic) bool allowsPickingVariables;
@property (nonatomic, readonly) unsigned long long arrayIndex;
@property (nonatomic) <WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter;
@property (nonatomic, readonly) <WFParameterState> *currentState;
@property (nonatomic, retain) <WFModuleSummaryEditorDelegate> *delegate;
@property (nonatomic, readonly) WFMultipleValueParameterState *initialArrayState;
@property (nonatomic, readonly) <WFParameterState> *initialState;
@property (nonatomic, retain) WFVariable *lastValueForEditingVariable;
@property (nonatomic, readonly) WFParameter<WFModuleSummarySupporting> *parameter;
@property (getter=isProcessing, nonatomic, readonly) bool processing;
@property (nonatomic) bool returnToKeyboardOnComplete;
@property (nonatomic, readonly) <WFSlotTemplateTextEntry> *textEntry;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;

+ (bool)supportsEditingTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2;
+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (void).cxx_destruct;
- (void)_beginEditingVariableAttachment:(id)arg1 slotIdentifier:(id)arg2 presentationAnchor:(id)arg3;
- (bool)allowsPickingVariables;
- (unsigned long long)arrayIndex;
- (id)auxiliaryViewPresenter;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)beginEditingTextAttachment:(id)arg1 inSlotWithIdentifier:(id)arg2 presentationAnchor:(id)arg3;
- (bool)canTypeAlongsideVariables;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)arg1;
- (void)commitState:(id)arg1;
- (void)completeEditing;
- (void)completeEditingWithTextAttachmentToEdit:(id)arg1;
- (id)currentState;
- (id)customMenuElementsForSlotWithIdentifier:(id)arg1 style:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithParameter:(id)arg1 arrayIndex:(unsigned long long)arg2 processing:(bool)arg3;
- (id)initialArrayState;
- (id)initialState;
- (bool)isProcessing;
- (id)lastValueForEditingVariable;
- (bool)menuElementsContainDeferredElement:(id)arg1 withEstimatedCountGreaterThan:(long long)arg2;
- (id)menuForSlotWithIdentifier:(id)arg1 style:(unsigned long long)arg2;
- (id)parameter;
- (void)requestEditingSlotIdentifier:(id)arg1;
- (void)requestTextEntry;
- (bool)returnToKeyboardOnComplete;
- (void)setAllowsPickingVariables:(bool)arg1;
- (void)setAuxiliaryViewPresenter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastValueForEditingVariable:(id)arg1;
- (void)setReturnToKeyboardOnComplete:(bool)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)sourceViewTintColorDidChange;
- (void)stageState:(id)arg1;
- (id)stateByReplacingVariableFromCurrentState:(id)arg1 withVariable:(id)arg2;
- (id)textEntry;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)arg1;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)arg1;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)arg1;
- (bool)textEntryShouldChangeText:(id)arg1;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(bool*)arg2;
- (id)variableMenuElementsForSlotWithIdentifier:(id)arg1;
- (bool)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
