
@protocol WFDynamicEnumerationDataSource <NSObject>

@required

- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;

@optional

- (id)defaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1;
- (WFColor *)enumeration:(WFEnumerationParameter *)arg1 accessoryColorForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (WFIcon *)enumeration:(WFEnumerationParameter *)arg1 accessoryIconForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (WFImage *)enumeration:(WFEnumerationParameter *)arg1 accessoryImageForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedSubtitleLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (bool)enumeration:(WFEnumerationParameter *)arg1 shouldStripSenstitiveContentFromValue:(id)arg2;
- (bool)enumerationAllowsMultipleValues:(WFEnumerationParameter *)arg1;
- (bool)enumerationShouldAlwaysReloadPossibleStates:(WFEnumerationParameter *)arg1;
- (bool)enumerationShouldProvideValuesForParameterSummaryLocalization:(WFEnumerationParameter *)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFEnumerationParameter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)loadPossibleStatesForEnumeration:(void *)arg1 searchTerm:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFEnumerationParameter *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INObjectCollection *, NSError *, void*
- (NSArray *)possibleStatesForEnumeration:(WFEnumerationParameter *)arg1;

@end
