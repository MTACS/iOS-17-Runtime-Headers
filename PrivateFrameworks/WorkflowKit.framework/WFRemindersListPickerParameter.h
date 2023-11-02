
@interface WFRemindersListPickerParameter : WFEnumerationParameter {
    bool  _allowsAllLists;
    id  _defaultSerializedListRepresentation;
    NSArray * _listStates;
}

@property (nonatomic, readonly) bool allowsAllLists;
@property (nonatomic, retain) id defaultSerializedListRepresentation;
@property (nonatomic, retain) NSArray *listStates;

- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)arg1;
- (bool)allowsAllLists;
- (id)defaultSerializedListRepresentation;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)listStates;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)reloadStates;
- (void)setDefaultSerializedListRepresentation:(id)arg1;
- (void)setListStates:(id)arg1;
- (Class)singleStateClass;
- (void)storeDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
