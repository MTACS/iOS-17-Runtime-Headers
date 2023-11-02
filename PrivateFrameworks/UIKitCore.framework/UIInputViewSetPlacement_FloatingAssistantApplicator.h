
@interface UIInputViewSetPlacement_FloatingAssistantApplicator : UIInputViewSetPlacement_AssistantApplicator {
    TUIInputAssistantHostView * _hostView;
}

@property (nonatomic, retain) TUIInputAssistantHostView *hostView;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAccessoryPaddingForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)applyChanges:(id)arg1;
- (id)hostView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAccessoryPadding;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverFrame;
- (void)prepare;
- (void)setHostView:(id)arg1;
- (void)setupHostViewIfNeeded;
- (bool)shouldApplyOriginChange;

@end
