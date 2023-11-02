
@interface ConversationKit.ConversationHUDControlsStatusView : UIView <UIPointerInteractionDelegate> {
    void $__lazy_storage_$_conversationDetailsView;
    void $__lazy_storage_$_conversationStatusHStack;
    void $__lazy_storage_$_trailingActionsView;
    void context;
    void controlsManager;
    void leadingAccessoryView;
    void menuHostViewController;
    void presentationStyle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recipe;
}

@property (nonatomic, retain) _TtC15ConversationKit23ConversationDetailsView *conversationDetailsView;

- (void).cxx_destruct;
- (id)conversationDetailsView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setConversationDetailsView:(id)arg1;
- (void)setupRootView;
- (void)traitCollectionDidChange:(id)arg1;

@end
