
@protocol SAUILayoutSpecifyingPrivate <SAUILayoutSpecifying>

@optional

- (<SAUILayoutModePreferring> *)layoutModePreference;
- (SAUIPreferredLayoutModeAssertion *)preferredLayoutModeAssertion;
- (NSArray *)preferredLayoutModeAssertions;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2;

@end
