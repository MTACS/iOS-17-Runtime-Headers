
@interface WFQuantityTypePickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
}

@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (bool)preferParameterValuePicker;
- (Class)singleStateClass;

@end
