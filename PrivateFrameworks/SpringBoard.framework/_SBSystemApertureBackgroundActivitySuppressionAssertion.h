
@interface _SBSystemApertureBackgroundActivitySuppressionAssertion : BSSimpleAssertion {
    NSSet * _backgroundActivitiesToSuppress;
}

@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesToSuppress;

- (void).cxx_destruct;
- (id)backgroundActivitiesToSuppress;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 backgroundActivitiesToSuppress:(id)arg3 invalidationBlock:(id /* block */)arg4;

@end
