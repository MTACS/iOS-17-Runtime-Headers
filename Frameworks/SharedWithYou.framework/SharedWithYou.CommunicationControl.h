
@interface SharedWithYou.CommunicationControl : UIControl {
    void communicationChannel;
    void contentView;
    void enablementLock;
    void imageView;
    void label;
    void menu;
    void sBehaviors;
    void tintLock;
    void touchUpInsideActionIdentifier;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEnabled;
- (id)label;
- (void)setEnabled:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
