
@interface PGTitleSpecArgument : NSObject {
    id  _inputVariable;
    bool  _requiresInput;
}

@property (retain) id inputVariable;
@property bool requiresInput;

- (void).cxx_destruct;
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;
- (id)inputVariable;
- (bool)requiresInput;
- (void)setInputVariable:(id)arg1;
- (void)setRequiresInput:(bool)arg1;

@end
