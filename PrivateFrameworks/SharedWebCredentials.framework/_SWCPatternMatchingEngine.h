
@interface _SWCPatternMatchingEngine : NSObject {
    _SWCPatternList * _patternList;
    _SWCSubstitutionVariableList * _subVarList;
}

+ (id)new;

- (void).cxx_destruct;
- (id)_evaluateURLComponents:(id)arg1 auditToken:(const struct { unsigned int x1[8]; }*)arg2;
- (id)evaluateURLComponents:(id)arg1;
- (id)evaluateURLComponents:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (id)init;
- (id)initWithPatternDictionaries:(id)arg1;
- (id)initWithPatternDictionaries:(id)arg1 substitutionVariables:(id)arg2;

@end
