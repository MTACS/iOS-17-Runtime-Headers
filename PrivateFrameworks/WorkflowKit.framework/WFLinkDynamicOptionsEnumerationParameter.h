
@interface WFLinkDynamicOptionsEnumerationParameter : WFDynamicEnumerationParameter <WFParameterValuePickable> {
    bool  _allowsMultipleValues;
    LNActionParameterMetadata * _parameterMetadata;
    <WFPropertyListObject> * _serializedDefaultParameterOption;
}

@property (nonatomic) bool allowsMultipleValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LNActionParameterMetadata *parameterMetadata;
@property (nonatomic, readonly) <WFPropertyListObject> *serializedDefaultParameterOption;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wf_allowsMultipleSelection;
@property (nonatomic, readonly) bool wf_alwaysScaleIconImage;
@property (nonatomic, readonly) NSString *wf_displayLocalizedPrompt;
@property (nonatomic, readonly) bool wf_shouldValidateCurrentStateOnCollectionChanged;
@property (nonatomic, readonly) bool wf_supportsSearch;
@property (nonatomic, readonly) bool wf_usesGroupTableViewStyle;
@property (nonatomic, readonly) bool wf_usesTogglesForSelection;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (bool)allowsMultipleValues;
- (bool)alwaysShowsButton;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)displaysMultipleValueEditor;
- (bool)dynamicOptionsSupportsSearch;
- (bool)hidesSubtitleInEditor;
- (id)initWithDefinition:(id)arg1;
- (id)localizedTitleForButtonWithState:(id)arg1;
- (id)parameterMetadata;
- (bool)parameterStateIsValid:(id)arg1;
- (bool)preferParameterValuePicker;
- (id)serializedDefaultParameterOption;
- (void)setAllowsMultipleValues:(bool)arg1;
- (void)setParameterMetadata:(id)arg1;
- (Class)singleStateClass;
- (id)statesForMultipleStateLabelWithStates:(id)arg1;
- (bool)wf_allowsMultipleSelection;
- (id)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)wf_pickerLocalizedSubtitleForState:(id)arg1;
- (id)wf_pickerLocalizedTitleForState:(id)arg1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)arg1;
- (bool)wf_shouldValidateCurrentStateOnCollectionChanged;
- (bool)wf_supportsSearch;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (bool)moduleSummaryShowsAddButtonForState:(id)arg1;
- (id)moduleSummarySlotsForState:(id)arg1;

@end
