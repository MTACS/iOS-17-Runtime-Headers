
@protocol SBSAStackablePreferencesProviding <SBSAPreferencesProviding>

@required

- (<SBSAStackablePreferencesProviding> *)childProvider;
- (NSString *)descriptionForStackDepiction;
- (id)initWithParentProvider:(id <SBSAStackablePreferencesProviding>)arg1;
- (<SBSAStackablePreferencesProviding> *)parentProvider;
- (void)removeFromParentProvider;
- (void)setChildProvider:(id <SBSAStackablePreferencesProviding>)arg1;
- (NSString *)stackDepiction;

@end
