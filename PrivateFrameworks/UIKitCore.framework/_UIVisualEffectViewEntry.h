
@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable> {
    long long  _requirements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long requirements;
@property (readonly) Class superclass;

- (void)addEffectToView:(id)arg1;
- (void)applyEffectAsRequested:(bool)arg1 toView:(id)arg2;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (void)convertToIdentity;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (long long)requirements;
- (void)setRequirements:(long long)arg1;
- (bool)shouldAnimateProperty:(id)arg1;

@end
