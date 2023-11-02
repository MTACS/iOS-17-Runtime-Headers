
@interface _UIKeyWindowEvaluator : NSObject <BSDebugDescriptionProviding> {
    UIWindow * _applicationKeyWindow;
    unsigned long long  _countOfFBSSceneBackedScenesByShiftedIdiom;
    unsigned long long  _defaultEvaluationStrategyByShiftedIdiom;
    _UIKeyWindowSceneStack * _excludedSceneStack;
    _UIKeyWindowSceneStack * _keyWindowSceneStack;
    <BSInvalidatable> * _stateCaptureToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedEvaluator;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
