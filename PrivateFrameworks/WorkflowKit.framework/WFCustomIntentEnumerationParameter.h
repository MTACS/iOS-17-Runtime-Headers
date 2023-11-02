
@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter {
    INCodableEnumAttribute * _enumAttribute;
    NSDictionary * _enumNamesToKeys;
    NSDictionary * _enumNamesToLabels;
    NSDictionary * _keysToEnumNames;
    NSArray * _possibleStates;
}

@property (nonatomic, readonly) INCodableEnumAttribute *enumAttribute;
@property (nonatomic, readonly) NSDictionary *enumNamesToKeys;
@property (nonatomic, readonly) NSDictionary *enumNamesToLabels;
@property (nonatomic, readonly) NSDictionary *keysToEnumNames;
@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)enumAttribute;
- (id)enumNamesToKeys;
- (id)enumNamesToLabels;
- (id)initWithDefinition:(id)arg1;
- (id)keysToEnumNames;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;

@end
