
@interface SBDodgingModifierEvent : SBChainableModifierEvent

@property (nonatomic, readonly) unsigned long long type;

- (id)description;
- (unsigned long long)type;

@end
