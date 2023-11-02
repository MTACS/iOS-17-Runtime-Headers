
@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {
    WFAction * _action;
    id  _defaultSerializedRepresentation;
    NSArray * _possibleUnits;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)unitConversion;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)availableUnitsForWorkoutActivityType:(id)arg1 completion:(id /* block */)arg2;
- (id)currentWorkoutActivityType;
- (id)defaultSerializedRepresentation;
- (id)defaultState;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (bool)parameterStateIsValid:(id)arg1;
- (id)possibleUnits;
- (void)setAction:(id)arg1;
- (void)setPossibleUnits:(id)arg1;
- (void)updateCurrentStateWithNewUnitString:(id)arg1 currentState:(id)arg2;
- (void)updatePossibleUnits;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
