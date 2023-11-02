
@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFCodableAttributeBackedParameter, WFParameterValuePickable> {
    INCodableAttribute * _codableAttribute;
    INStringLocalizer * _stringLocalizer;
}

@property (nonatomic, retain) INCodableAttribute *codableAttribute;
@property (nonatomic) <WFCustomIntentDynamicEnumerationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedConfigurationPromptDialog;
@property (nonatomic, retain) INStringLocalizer *stringLocalizer;
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
- (id)accessoryImageForPossibleState:(id)arg1;
- (id)codableAttribute;
- (bool)displaysMultipleValueEditor;
- (void)getStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hidesSubtitleInEditor;
- (id)localizedConfigurationPromptDialog;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (bool)preferParameterValuePicker;
- (void)setCodableAttribute:(id)arg1;
- (void)setStringLocalizer:(id)arg1;
- (Class)singleStateClass;
- (id)stringLocalizer;
- (bool)wf_allowsMultipleSelection;
- (id)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)wf_pickerLocalizedImageForState:(id)arg1;
- (id)wf_pickerLocalizedSubtitleForState:(id)arg1;
- (id)wf_pickerLocalizedTitleForState:(id)arg1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)arg1;
- (bool)wf_shouldValidateCurrentStateOnCollectionChanged;
- (bool)wf_supportsSearch;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (bool)moduleSummaryShowsAddButtonForState:(id)arg1;
- (id)moduleSummarySlotsForState:(id)arg1;

@end
