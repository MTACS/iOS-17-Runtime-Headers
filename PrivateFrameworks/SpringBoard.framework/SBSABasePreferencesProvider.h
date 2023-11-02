
@interface SBSABasePreferencesProvider : NSObject <SBSAStackablePreferencesProviding> {
    <SBSAStackablePreferencesProviding> * _childProvider;
    NSMutableArray * _childProviders;
    <SBSAStackablePreferencesProviding> * _parentProvider;
}

@property (nonatomic, retain) <SBSAStackablePreferencesProviding> *childProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) SBSystemApertureTransitionSettings *defaultTransitionSettings;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBSAStackablePreferencesProviding> *parentProvider;
@property (readonly) Class superclass;

+ (id)newAnimatedTransitionDescriptionWithBehaviorSettings:(id)arg1;
+ (id)newUnanimatedTransitionDescription;
+ (id)settings;

- (void).cxx_destruct;
- (id)behaviorSettingsForProperty:(id)arg1;
- (id)childProvider;
- (id)defaultTransitionSettings;
- (id)description;
- (id)descriptionForStackDepiction;
- (id)firstChildPreferenceProviderOfClass:(Class)arg1;
- (id)firstChildPreferenceProviderRespondingToSelector:(SEL)arg1;
- (id)init;
- (id)initWithParentProvider:(id)arg1;
- (id)newAnimatedTransitionDescriptionForProperty:(id)arg1;
- (id)newAnimatedTransitionDescriptionForProperty:(id)arg1 animated:(bool)arg2;
- (id)parentProvider;
- (id)preferencesFromContext:(id)arg1;
- (void)removeFromParentProvider;
- (void)setChildProvider:(id)arg1;
- (id)stackDepiction;

@end
