
@interface WFFocusModesPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (Class)singleStateClass;

@end
