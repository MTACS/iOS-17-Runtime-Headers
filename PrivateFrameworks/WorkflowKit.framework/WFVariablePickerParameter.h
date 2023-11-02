
@interface WFVariablePickerParameter : WFEnumerationParameter <WFParameterValuePickable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wf_allowsMultipleSelection;
@property (nonatomic, readonly) bool wf_alwaysScaleIconImage;
@property (nonatomic, readonly) NSString *wf_displayLocalizedPrompt;
@property (nonatomic, readonly) bool wf_shouldValidateCurrentStateOnCollectionChanged;
@property (nonatomic, readonly) bool wf_supportsSearch;
@property (nonatomic, readonly) bool wf_usesGroupTableViewStyle;
@property (nonatomic, readonly) bool wf_usesTogglesForSelection;

- (bool)alwaysShowsButton;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)wf_pickerLocalizedImageForState:(id)arg1;
- (id)wf_pickerLocalizedSubtitleForState:(id)arg1;
- (id)wf_pickerLocalizedTitleForState:(id)arg1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)arg1;

@end
