
@interface _PXContextMenuConfigurationState : NSObject {
    bool  _actionsAllowedForContextMenuInteraction;
    long long  _interactionAppearance;
    bool  _isContextMenuInteractionActive;
    bool  _isPreviewCommitting;
}

@property (nonatomic) bool actionsAllowedForContextMenuInteraction;
@property (nonatomic) long long interactionAppearance;
@property (nonatomic) bool isContextMenuInteractionActive;
@property (nonatomic) bool isPreviewCommitting;

- (bool)actionsAllowedForContextMenuInteraction;
- (long long)interactionAppearance;
- (bool)isContextMenuInteractionActive;
- (bool)isPreviewCommitting;
- (void)setActionsAllowedForContextMenuInteraction:(bool)arg1;
- (void)setInteractionAppearance:(long long)arg1;
- (void)setIsContextMenuInteractionActive:(bool)arg1;
- (void)setIsPreviewCommitting:(bool)arg1;

@end
