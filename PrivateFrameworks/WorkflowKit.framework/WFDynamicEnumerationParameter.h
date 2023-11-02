
@interface WFDynamicEnumerationParameter : WFEnumerationParameter <WFParameterValuePickable> {
    <WFDynamicEnumerationDataSource> * _dataSource;
    id  _defaultSerializedRepresentation;
    unsigned long long  _defaultValueLoadingState;
    NSArray * _possibleStates;
    INObjectCollection * _possibleStatesCollection;
    NSError * _possibleStatesLoadingError;
    unsigned long long  _possibleStatesLoadingState;
}

@property (nonatomic) <WFDynamicEnumerationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultValueLoadingState;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAsynchronous;
@property (nonatomic, readonly) bool loadsDefaultStateAsynchronously;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, retain) INObjectCollection *possibleStatesCollection;
@property (nonatomic, readonly) NSError *possibleStatesLoadingError;
@property (nonatomic, readonly) unsigned long long possibleStatesLoadingState;
@property (nonatomic, readonly) bool shouldAlwaysReloadPossibleStates;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wf_allowsMultipleSelection;
@property (nonatomic, readonly) bool wf_alwaysScaleIconImage;
@property (nonatomic, readonly) NSString *wf_displayLocalizedPrompt;
@property (nonatomic, readonly) bool wf_shouldValidateCurrentStateOnCollectionChanged;
@property (nonatomic, readonly) bool wf_supportsSearch;
@property (nonatomic, readonly) bool wf_usesGroupTableViewStyle;
@property (nonatomic, readonly) bool wf_usesTogglesForSelection;

- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)accessoryImageForPossibleState:(id)arg1;
- (bool)allowsMultipleValues;
- (bool)alwaysShowsButton;
- (void)clearPossibleStates;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)dataSource;
- (bool)dataSourceSupportsAsynchronousFetchingOfDefaultSerializedRepresentation;
- (bool)dataSourceSupportsSynchronousFetchingOfDefaultSerializedRepresentation;
- (id)defaultSerializedRepresentation;
- (void)defaultSerializedRepresentationDidChange;
- (unsigned long long)defaultValueLoadingState;
- (bool)isAsynchronous;
- (void)loadDefaultSerializedRepresentationWithCompletionHandler:(id /* block */)arg1;
- (void)loadPossibleStatesWithCompletionHandler:(id /* block */)arg1;
- (bool)loadsDefaultStateAsynchronously;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleStates;
- (id)possibleStatesCollection;
- (void)possibleStatesDidChange;
- (id)possibleStatesForLocalization;
- (id)possibleStatesLoadingError;
- (unsigned long long)possibleStatesLoadingState;
- (void)reloadPossibleStates;
- (void)setDataSource:(id)arg1;
- (void)setDefaultValueLoadingState:(unsigned long long)arg1;
- (void)setPossibleStates:(id)arg1;
- (void)setPossibleStatesCollection:(id)arg1;
- (void)setPossibleStatesFromRemoteSource:(id)arg1;
- (bool)shouldAlwaysReloadPossibleStates;
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)arg1;
- (bool)wf_shouldValidateCurrentStateOnCollectionChanged;

@end
