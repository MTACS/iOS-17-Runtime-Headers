
@interface WFDynamicResolveParameter : WFParameter <WFCodableAttributeBackedParameter, WFModuleSummarySupporting, WFParameterValuePickable> {
    INCodableAttribute * _codableAttribute;
    <WFDynamicResolveParameterDataSource> * _dataSource;
    <WFDynamicResolveParameterDelegate> * _delegate;
    INStringLocalizer * _stringLocalizer;
}

@property (nonatomic, retain) INCodableAttribute *codableAttribute;
@property (nonatomic) <WFDynamicResolveParameterDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDynamicResolveParameterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
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
- (id)codableAttribute;
- (id)dataSource;
- (id)delegate;
- (void)endResolutionSession;
- (id)initWithDefinition:(id)arg1;
- (void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 completion:(id /* block */)arg3;
- (id)localizedLabelForState:(id)arg1;
- (void)resolveOptionsForUserInput:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setCodableAttribute:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStringLocalizer:(id)arg1;
- (Class)singleStateClass;
- (id)stringLocalizer;
- (bool)wf_allowsMultipleSelection;
- (bool)wf_alwaysScaleIconImage;
- (id)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)wf_pickerLocalizedImageForState:(id)arg1;
- (id)wf_pickerLocalizedSubtitleForState:(id)arg1;
- (id)wf_pickerLocalizedTitleForState:(id)arg1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)arg1;
- (bool)wf_shouldValidateCurrentStateOnCollectionChanged;
- (bool)wf_supportsSearch;
- (bool)wf_usesGroupTableViewStyle;
- (bool)wf_usesTogglesForSelection;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
