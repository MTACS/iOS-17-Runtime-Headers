
@interface PREditingRequestDismissalAction : BSAction

@property (nonatomic, readonly) bool userAcceptedChanges;

- (id)initWithUserAcceptedChanges:(bool)arg1 completion:(id /* block */)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (bool)userAcceptedChanges;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
