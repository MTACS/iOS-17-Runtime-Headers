
@interface WFFileLabelColorPickerParameter : WFEnumerationParameter {
    NSDictionary * _localizedLabelsForLabelNumbers;
    NSArray * _possibleStates;
}

@property (nonatomic, readonly) NSDictionary *localizedLabelsForLabelNumbers;

- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedLabelsForLabelNumbers;
- (id)possibleStates;
- (Class)singleStateClass;

@end
