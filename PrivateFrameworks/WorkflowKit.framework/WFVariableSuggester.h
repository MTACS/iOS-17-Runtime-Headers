
@interface WFVariableSuggester : NSObject {
    NSArray * _currentVariables;
    <WFVariableSuggesterDelegate> * _delegate;
    unsigned long long  _maxSuggestionsCount;
    unsigned long long  _minSuggestionsCount;
    NSArray * _outputActions;
    NSArray * _suggestedVariables;
    NSArray * _userDefinedVariableNames;
    <WFVariableProvider> * _variableProvider;
}

@property (nonatomic, copy) NSArray *currentVariables;
@property (nonatomic) <WFVariableSuggesterDelegate> *delegate;
@property (nonatomic) unsigned long long maxSuggestionsCount;
@property (nonatomic) unsigned long long minSuggestionsCount;
@property (nonatomic, copy) NSArray *outputActions;
@property (nonatomic, retain) NSArray *suggestedVariables;
@property (nonatomic, copy) NSArray *userDefinedVariableNames;
@property (nonatomic) <WFVariableProvider> *variableProvider;

- (void).cxx_destruct;
- (void)availableVariablesDidChange;
- (id)currentVariables;
- (id)delegate;
- (id)init;
- (unsigned long long)maxSuggestionsCount;
- (unsigned long long)minSuggestionsCount;
- (id)outputActions;
- (void)setCurrentVariables:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxSuggestionsCount:(unsigned long long)arg1;
- (void)setMinSuggestionsCount:(unsigned long long)arg1;
- (void)setOutputActions:(id)arg1;
- (void)setSuggestedVariables:(id)arg1;
- (void)setUserDefinedVariableNames:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (id)suggestedVariables;
- (id)userDefinedVariableNames;
- (id)variableProvider;

@end
