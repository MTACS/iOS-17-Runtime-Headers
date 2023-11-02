
@interface WFEnumerationParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider, WFParameterValuePickable> {
    bool  _alwaysShowsButton;
    NSArray * _displayNames;
    bool  _hideClearButton;
    bool  _liveUpdatesPossibleStatesInEditor;
    bool  _prefersParameterValuePicker;
    bool  _providesLocalizedValuesForSummary;
    NSString * _selectionType;
    NSArray * _staticPossibleStates;
    NSArray * _subtitles;
    NSArray * _symbolNames;
    NSString * _tableViewStyle;
}

@property (nonatomic, readonly) bool alwaysShowsButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayNames;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideClearButton;
@property (nonatomic, readonly) bool hidesAccessoryIconInEditor;
@property (nonatomic, readonly) bool hidesSubtitleInEditor;
@property (nonatomic, readonly) bool liveUpdatesPossibleStatesInEditor;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) NSArray *possibleStatesForLocalization;
@property (nonatomic, readonly) bool preferContextMenu;
@property (nonatomic, readonly) bool preferParameterValuePicker;
@property (nonatomic, readonly) bool prefersParameterValuePicker;
@property (nonatomic, readonly) bool providesLocalizedValuesForSummary;
@property (nonatomic, readonly) NSString *selectionType;
@property (nonatomic, readonly) NSArray *staticPossibleStates;
@property (nonatomic, readonly) NSArray *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *symbolNames;
@property (nonatomic, readonly) NSString *tableViewStyle;
@property (nonatomic, readonly) bool wf_allowsMultipleSelection;
@property (nonatomic, readonly) bool wf_alwaysScaleIconImage;
@property (nonatomic, readonly) NSString *wf_displayLocalizedPrompt;
@property (nonatomic, readonly) bool wf_shouldValidateCurrentStateOnCollectionChanged;
@property (nonatomic, readonly) bool wf_supportsSearch;
@property (nonatomic, readonly) bool wf_usesGroupTableViewStyle;
@property (nonatomic, readonly) bool wf_usesTogglesForSelection;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)accessoryImageForPossibleState:(id)arg1;
- (bool)alwaysShowsButton;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)displayNames;
- (bool)displaysMultipleValueEditor;
- (bool)hideClearButton;
- (bool)hidesAccessoryIconInEditor;
- (bool)hidesSubtitleInEditor;
- (id)initWithDefinition:(id)arg1;
- (bool)liveUpdatesPossibleStatesInEditor;
- (id)localizedLabelForMultipleCompleteState:(id)arg1;
- (id)localizedLabelForMultipleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (id)localizedTitleForButtonWithState:(id)arg1;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (id)possibleStatesForLocalization;
- (bool)preferContextMenu;
- (bool)preferParameterValuePicker;
- (bool)prefersParameterValuePicker;
- (bool)providesLocalizedValuesForSummary;
- (id)selectionType;
- (void)setPossibleStatesFromRemoteSource:(id)arg1;
- (Class)singleStateClass;
- (void)startLiveUpdatingPossibleStates;
- (id)statesForMultipleStateLabelWithStates:(id)arg1;
- (id)staticPossibleStates;
- (void)stopLiveUpdatingPossibleStates;
- (id)subtitles;
- (id)symbolNames;
- (id)tableViewStyle;
- (bool)wf_allowsMultipleSelection;
- (bool)wf_alwaysScaleIconImage;
- (id)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)wf_pickerLocalizedIconForState:(id)arg1;
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
+ (bool)supportsEditingMultipleValues;

- (bool)moduleSummaryShowsAddButtonForState:(id)arg1;
- (id)moduleSummarySlotsForState:(id)arg1;

@end
