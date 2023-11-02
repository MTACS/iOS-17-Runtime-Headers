
@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver, WFParameterValuePickable> {
    WFMediaRoutePicker * _routePicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFMediaRoutePicker *routePicker;
@property (nonatomic, readonly) long long routeType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wf_allowsMultipleSelection;
@property (nonatomic, readonly) bool wf_alwaysScaleIconImage;
@property (nonatomic, readonly) NSString *wf_displayLocalizedPrompt;
@property (nonatomic, readonly) bool wf_shouldValidateCurrentStateOnCollectionChanged;
@property (nonatomic, readonly) bool wf_supportsSearch;
@property (nonatomic, readonly) bool wf_usesGroupTableViewStyle;
@property (nonatomic, readonly) bool wf_usesTogglesForSelection;

- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (bool)hidesAccessoryIconInEditor;
- (id)initWithDefinition:(id)arg1;
- (bool)liveUpdatesPossibleStatesInEditor;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)localizedLabelForPossibleState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (bool)preferParameterValuePicker;
- (id)routePicker;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (long long)routeType;
- (void)setRoutePicker:(id)arg1;
- (bool)shouldDefaultToLocalDeviceEndpoint;
- (Class)singleStateClass;
- (id)sortedStatesForAvailableRoutes:(id)arg1;
- (void)startDiscoveringRoutes;
- (void)startLiveUpdatingPossibleStates;
- (void)stopDiscoveringRoutes;
- (void)stopLiveUpdatingPossibleStates;
- (bool)wf_alwaysScaleIconImage;

@end
