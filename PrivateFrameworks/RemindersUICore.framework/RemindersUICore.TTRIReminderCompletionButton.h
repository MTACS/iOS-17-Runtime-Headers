
@interface RemindersUICore.TTRIReminderCompletionButton : RemindersUICore.TTRIExpandedHitTestButton {
    void icon;
    void needsUpdateIcon;
    void preferredSymbolConfiguration;
    void prefersFadedAppearance;
    void scale;
}

@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;

- (void).cxx_destruct;
- (id)accessibilityUserInputLabels;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityUserInputLabels:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
