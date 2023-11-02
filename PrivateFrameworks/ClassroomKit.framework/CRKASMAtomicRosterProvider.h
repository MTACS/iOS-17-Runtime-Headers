
@interface CRKASMAtomicRosterProvider : CRKASMRosterProviderDecoratorBase {
    NSMutableDictionary * _completionsByConstraint;
}

@property (nonatomic, readonly) NSMutableDictionary *completionsByConstraint;

- (void).cxx_destruct;
- (void)beginObservingRoster;
- (id)completionsByConstraint;
- (id)courseWithIdentifier:(id)arg1 inRoster:(id)arg2;
- (id)coursesMatchingCreateProperties:(id)arg1 inRoster:(id)arg2 createdAfter:(id)arg3;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)endObservingRoster;
- (void)evaluateConstraintForUnderlyingCompletion:(id)arg1 error:(id)arg2;
- (void)evalutateConstraintsForRosterUpdate;
- (id)initWithRosterProvider:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pushCompletion:(id /* block */)arg1 withRosterEvaluator:(id /* block */)arg2;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;

@end
