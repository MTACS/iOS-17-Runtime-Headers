
@interface WFActionParameterSummaryValueMatchResult : NSObject {
    unsigned long long  _matchType;
    unsigned long long  _numberOfMatchingParameters;
    WFActionParameterSummaryValue * _value;
}

@property (nonatomic, readonly) unsigned long long matchType;
@property (nonatomic, readonly) unsigned long long numberOfMatchingParameters;
@property (nonatomic, readonly) WFActionParameterSummaryValue *value;

+ (id)noMatchWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 matchType:(unsigned long long)arg2 numberOfMatchingParameters:(unsigned long long)arg3;
- (unsigned long long)matchType;
- (unsigned long long)numberOfMatchingParameters;
- (id)value;

@end
