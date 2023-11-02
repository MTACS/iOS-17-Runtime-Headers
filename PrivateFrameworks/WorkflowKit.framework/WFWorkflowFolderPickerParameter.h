
@interface WFWorkflowFolderPickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
}

- (void).cxx_destruct;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)accessoryImageForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;

@end
