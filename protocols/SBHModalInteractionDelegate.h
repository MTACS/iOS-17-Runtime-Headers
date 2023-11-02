
@protocol SBHModalInteractionDelegate <NSObject>

@optional

- (void)modalInteractionDidBegin:(id <SBHModalInteraction>)arg1;
- (void)modalInteractionDidEnd:(id <SBHModalInteraction>)arg1;
- (void)modalInteractionWillBegin:(id <SBHModalInteraction>)arg1;
- (void)modalInteractionWillEnd:(id <SBHModalInteraction>)arg1;

@end
