
@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {
    bool  __prefersCompactAppearance;
    struct { 
        unsigned int presentOnTouchDown : 1; 
    }  _flags;
}

@property (setter=_setPrefersCompactAppearance:, nonatomic) bool _prefersCompactAppearance;
@property (setter=_setPresentOnTouchDown:, nonatomic) bool _presentOnTouchDown;

- (bool)_clickPresentationInteractionShouldPlayFeedback:(id)arg1;
- (id)_interactionDrivers;
- (bool)_prefersCompactAppearance;
- (bool)_presentOnTouchDown;
- (void)_setPrefersCompactAppearance:(bool)arg1;
- (void)_setPresentOnTouchDown:(bool)arg1;
- (void)_willBeginWithConfiguration:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (long long)menuAppearance;

@end
