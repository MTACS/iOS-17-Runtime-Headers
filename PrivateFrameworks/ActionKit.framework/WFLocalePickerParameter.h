
@interface WFLocalePickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
}

+ (id)availableLocaleIdentifiers;

- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedPlaceholder;
- (id)possibleStates;

@end
