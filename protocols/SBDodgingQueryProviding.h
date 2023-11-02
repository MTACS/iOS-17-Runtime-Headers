
@protocol SBDodgingQueryProviding <SBChainableModifierQuery>

@required

- (long long)animationBehaviorModeForIdentifier:(NSString *)arg1;
- (NSDictionary *)framesForIdentifiers;
- (SBFFluidBehaviorSettings *)layoutSettingsForIdentifier:(NSString *)arg1;
- (SBDodgingModel *)modelForInvalidatedModel:(SBDodgingModel *)arg1;
- (NSOrderedSet *)zOrderedIdentifiers;

@end
