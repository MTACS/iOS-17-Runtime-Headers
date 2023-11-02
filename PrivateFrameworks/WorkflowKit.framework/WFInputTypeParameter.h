
@interface WFInputTypeParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)accessoryIconForPossibleState:(id)arg1;
- (bool)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)localizedLabelForMultipleCompleteState:(id)arg1;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (bool)preferParameterValuePicker;
- (id)selectionType;
- (Class)singleStateClass;

@end
