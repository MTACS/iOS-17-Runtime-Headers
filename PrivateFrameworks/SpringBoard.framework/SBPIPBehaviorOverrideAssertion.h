
@interface SBPIPBehaviorOverrideAssertion : BSSimpleAssertion {
    NSString * _cameraSensorAttributionBundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *cameraSensorAttributionBundleIdentifier;

- (void).cxx_destruct;
- (long long)behaviorOverrideReason;
- (id)cameraSensorAttributionBundleIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReason:(long long)arg1 identifier:(id)arg2 cameraSensorAttributionBundleIdentifier:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (id)initWithReason:(long long)arg1 identifier:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (id)initWithReason:(long long)arg1 invalidationBlock:(id /* block */)arg2;

@end
