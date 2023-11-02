
@interface WFPodcastPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)localizedLabelForPossibleState:(id)arg1;
- (bool)preferParameterValuePicker;
- (Class)singleStateClass;

@end
