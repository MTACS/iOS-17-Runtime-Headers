
@interface StocksUI.TodayView : UIView {
    void brandingLabel;
    void isEditing;
    void isHighlightable;
    void isHighlighted;
    void isSelectable;
    void isSelected;
    void labelAlphaValueWhenEditing;
    void shouldChangeLabelAlphaWhenEditing;
    void titleLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityLabel:(id)arg1;

@end