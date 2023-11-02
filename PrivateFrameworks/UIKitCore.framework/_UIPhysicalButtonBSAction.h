
@interface _UIPhysicalButtonBSAction : BSAction

@property (nonatomic, readonly) unsigned long long behavior;
@property (nonatomic, readonly) unsigned long long button;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) unsigned long long state;

- (long long)UIActionType;
- (unsigned long long)behavior;
- (unsigned long long)button;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)generation;
- (id)initWithPhysicalButton:(unsigned long long)arg1 behavior:(unsigned long long)arg2 generation:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)initWithPhysicalButton:(unsigned long long)arg1 behavior:(unsigned long long)arg2 state:(unsigned long long)arg3 generation:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
- (unsigned long long)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
