
@interface WFActionParameterSummaryValue : NSObject {
    NSString * _key;
    NSDictionary * _requiredValues;
    NSArray * _requiredVisibleParameterKeys;
    NSString * _summaryString;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSDictionary *requiredValues;
@property (nonatomic, readonly, copy) NSArray *requiredVisibleParameterKeys;
@property (nonatomic, readonly, copy) NSString *summaryString;

+ (id)parenthesisRegularExpression;

- (void).cxx_destruct;
- (void)explodeKeys:(id)arg1 currentKeyIndex:(unsigned long long)arg2 possibleValuesPerKey:(id)arg3 currentCombination:(id)arg4 results:(id)arg5;
- (id)explodedKeysWithPossibleValuesInAction:(id)arg1;
- (id)initWithKey:(id)arg1 summaryString:(id)arg2;
- (id)key;
- (id)mapPossibleValuesToKeys:(id)arg1;
- (id)matchVisibleParameterKeys:(id)arg1 checkingRequiredValuesInAction:(id)arg2;
- (id)namedRequiredValuesInAction:(id)arg1;
- (id)requiredValues;
- (id)requiredVisibleParameterKeys;
- (id)summaryString;

@end
