
@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter {
    WFEvernoteAccessResource * _evernoteAccessResource;
    NSArray * _possibleStates;
}

@property (nonatomic, retain) WFEvernoteAccessResource *evernoteAccessResource;
@property (nonatomic, readonly) NSArray *possibleStates;

+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (id)evernoteAccessResource;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setActionResources:(id)arg1;
- (void)setEvernoteAccessResource:(id)arg1;
- (Class)singleStateClass;
- (void)updateNotebooks;
- (void)wasAddedToWorkflow;

@end
