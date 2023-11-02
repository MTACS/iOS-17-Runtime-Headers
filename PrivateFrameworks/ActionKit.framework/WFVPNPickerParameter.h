
@interface WFVPNPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)accessoryIconForPossibleState:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedSubtitleLabelForPossibleState:(id)arg2;
- (bool)enumerationAllowsMultipleValues:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (Class)singleStateClass;

@end
