
@interface WFAirDropVisibilityParameter : WFEnumerationParameter

@property (nonatomic, readonly) id defaultSerializedRepresentation;
@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;

@end
