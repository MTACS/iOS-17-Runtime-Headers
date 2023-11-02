
@interface ConversationKit.EffectsControlsViewController : UIViewController {
    void backgroundBlurView;
    void constraintsToUpdate;
    void delegate;
    void effectsBrowserHeight;
    void effectsBrowserViewController;
    void effectsButton;
    void effectsButtonIsVisible;
    void effectsEnabled;
}

@property (nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *effectsButton;
@property (nonatomic) bool effectsButtonIsVisible;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)effectsButton;
- (bool)effectsButtonIsVisible;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEffectsButtonIsVisible:(bool)arg1;

@end
