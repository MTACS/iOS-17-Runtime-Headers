
@interface SFClickableButton : UIButton <_UIClickInteractionDelegate> {
    _UIClickInteraction * _clickInteraction;
}

@property (getter=isClickEnabled, nonatomic) bool clickEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clickInteractionDidClickDown:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (bool)clickInteractionShouldBegin:(id)arg1;
- (bool)isClickEnabled;
- (void)setClickEnabled:(bool)arg1;

@end
