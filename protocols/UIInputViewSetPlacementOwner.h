
@protocol UIInputViewSetPlacementOwner <NSObject>

@required

- (<UIInputViewSetPlacementApplicator> *)applicator;
- (UIView *)containerView;
- (bool)hideInputAssistantBackdrop;
- (bool)hideInputView;
- (bool)hideInputViewBackdrops;
- (UIView *)hostView;
- (TUIInputAssistantHostView *)inputAssistantHostView;
- (long long)inputViewBackdropStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputViewPadding;
- (UIInputViewSet *)inputViewSet;
- (bool)keyboardController;
- (UIInputViewSetPlacement *)placement;
- (void)setHideInputAssistantBackdrop:(bool)arg1;
- (void)setHideInputView:(bool)arg1;
- (void)setHideInputViewBackdrops:(bool)arg1;

@end
