
@interface SBSAAnimatedTransitionDescription : NSObject <SBSAAnimatedTransitionDescribing, SBSAAnimatedTransitionMilestoneProviding, SBSABlockMutating, SBSADescriptionDebugSource> {
    NSUUID * _animatedTransitionIdentifier;
    SBFFluidBehaviorSettings * _behaviorSettings;
    NSMutableDictionary * _keyPathsToAuxillaryBehaviorSettingsMap;
    NSSet * _milestones;
    NSString * _responsibleProviderDebugString;
}

@property (setter=_setAnimatedTransitionIdentifier:, nonatomic, copy) NSUUID *animatedTransitionIdentifier;
@property (setter=_setBehaviorSettings:, nonatomic, copy) SBFFluidBehaviorSettings *behaviorSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setKeyPathsToAuxillaryBehaviorSettingsMap:, nonatomic, copy) NSMutableDictionary *keyPathsToAuxillaryBehaviorSettingsMap;
@property (setter=_setMilestones:, nonatomic, copy) NSSet *milestones;
@property (setter=_setResponsibleProviderDebugString:, nonatomic, copy) NSString *responsibleProviderDebugString;
@property (readonly) Class superclass;

+ (id)animatedTransitionDescriptionWithAnimatedTransitionIdentifier:(id)arg1 behaviorSettings:(id)arg2 milestones:(id)arg3 responsibleProvider:(id)arg4;
+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setAnimatedTransitionIdentifier:(id)arg1;
- (void)_setBehaviorSettings:(id)arg1;
- (void)_setKeyPathsToAuxillaryBehaviorSettingsMap:(id)arg1;
- (void)_setMilestones:(id)arg1;
- (void)_setResponsibleProviderDebugString:(id)arg1;
- (id)animatedTransitionIdentifier;
- (id)auxillaryBehaviorSettingsForKeyPath:(id)arg1;
- (id)behaviorSettings;
- (id)copyBySettingAuxillaryBehaviorSettings:(id)arg1 forKeyPath:(id)arg2;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAnimatedTransitionDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPathsToAuxillaryBehaviorSettingsMap;
- (id)keyPathsWithAuxillaryBehaviorSettings;
- (id)milestones;
- (id)responsibleProviderDebugString;

@end
