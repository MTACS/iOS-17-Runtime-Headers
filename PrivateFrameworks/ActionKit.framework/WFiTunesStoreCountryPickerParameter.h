
@interface WFiTunesStoreCountryPickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
}

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (bool)preferParameterValuePicker;
- (Class)singleStateClass;

@end
