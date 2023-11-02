
@interface ConversationKit.RecentsHeaderButtonsView : UICollectionReusableView {
    void $__lazy_storage_$_buttonsView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_createLinkButtonConfiguration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_newFaceTimeButtonConfiguration;
    void bottomAnchorConstraint;
    void buttonTitleParagraphStyle;
    void createLinkButton;
    void delegate;
    void featureFlags;
    void headerDelegate;
    void newFaceTimeButton;
}

- (void).cxx_destruct;
- (void)didTapNewCallButton;
- (void)didTapNewLinkButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
