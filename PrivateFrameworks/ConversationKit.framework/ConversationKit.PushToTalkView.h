
@interface ConversationKit.PushToTalkView : UIView {
    void $__lazy_storage_$_leaveLabelButtonView;
    void $__lazy_storage_$_talkLabelButtonView;
    void alwaysOnDisplayDimmingView;
    void bottomButtonContainerMarginConstant;
    void cancellables;
    void centerContentLayoutGuide;
    void leaveButton;
    void leftMarginLayoutGuide;
    void pttSessionDetailsView;
    void rightMarginLayoutGuide;
    void talkButton;
    void topDetailContainerMarginConstant;
    void viewModel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)openPTTApp:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
