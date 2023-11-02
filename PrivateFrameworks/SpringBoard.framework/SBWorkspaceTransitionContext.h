
@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding> {
    bool  _animationDisabled;
    BSAnimationSettings * _animationSettings;
    NSMutableDictionary * _entities;
    NSMutableArray * _finalizeBlocks;
    bool  _finalized;
    NSMutableDictionary * _previousEntities;
    SBWorkspaceTransitionRequest * _request;
}

@property (nonatomic) bool animationDisabled;
@property (nonatomic, retain) BSAnimationSettings *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *entities;
@property (getter=isFinalized, nonatomic, readonly) bool finalized;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *previousEntities;
@property (nonatomic) SBWorkspaceTransitionRequest *request;
@property (readonly) Class superclass;

+ (id)context;

- (void).cxx_destruct;
- (void)addFinalizeBlock:(id /* block */)arg1;
- (bool)animationDisabled;
- (id)animationSettings;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)entities;
- (id)entityForIdentifier:(id)arg1;
- (id)entityForKey:(id)arg1;
- (void)finalize;
- (id)init;
- (bool)isFinalized;
- (id)previousEntities;
- (id)previousEntityForIdentifier:(id)arg1;
- (id)previousEntityForKey:(id)arg1;
- (id)request;
- (void)setAnimationDisabled:(bool)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setEntity:(id)arg1 forKey:(id)arg2;
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;
- (void)setRequest:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
