
@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
    bool  _supportsLanguageDetection;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) bool supportsLanguageDetection;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (void)getAvailableLanguagesWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (id)possibleStatesForLocalization;
- (Class)singleStateClass;
- (bool)supportsLanguageDetection;
- (void)wasAddedToWorkflow;

@end
