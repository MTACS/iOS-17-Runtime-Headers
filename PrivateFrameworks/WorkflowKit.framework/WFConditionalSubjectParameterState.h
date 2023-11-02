
@interface WFConditionalSubjectParameterState : NSObject <WFVariableSupportingParameterState> {
    bool  _caseInsensitive;
    unsigned long long  _comparableTimeUnits;
    unsigned long long  _displayableTimeUnits;
    bool  _enumeration;
    NSString * _homeIdentifier;
    bool  _irrational;
    NSNumber * _maximumLength;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    unsigned long long  _tense;
    NSString * _unitType;
}

@property (getter=isCaseInsensitive, nonatomic, readonly) bool caseInsensitive;
@property (nonatomic, readonly) unsigned long long comparableTimeUnits;
@property (nonatomic, readonly) long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayableTimeUnits;
@property (getter=isEnumeration, nonatomic, readonly) bool enumeration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *homeIdentifier;
@property (getter=isIrrational, nonatomic, readonly) bool irrational;
@property (nonatomic, readonly) NSNumber *maximumLength;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tense;
@property (nonatomic, readonly) NSString *unitType;
@property (nonatomic, readonly) WFVariable *variable;

+ (Class)processingValueClass;
+ (id)subjectClasses;
+ (id)subjectType;

- (void).cxx_destruct;
- (unsigned long long)comparableTimeUnits;
- (id)containedVariables;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)displayableTimeUnits;
- (void)getContentWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (id)initWithHomeIdentifier:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (bool)isCaseInsensitive;
- (bool)isEnumeration;
- (bool)isEqual:(id)arg1;
- (bool)isIrrational;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (id)maximumLength;
- (id)maximumValue;
- (id)minimumValue;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (void)setHomeIdentifier:(id)arg1;
- (id)stepValue;
- (id)supportedComparisonOperators;
- (unsigned long long)tense;
- (id)unitType;

@end
