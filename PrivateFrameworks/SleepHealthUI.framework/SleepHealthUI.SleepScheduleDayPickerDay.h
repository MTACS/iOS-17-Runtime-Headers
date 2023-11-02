
@interface SleepHealthUI.SleepScheduleDayPickerDay : UIControl {
    void background;
    void configuration;
    void day;
    void dayLabel;
    void elsewhereIndicator;
    void isSelectedElsewhere;
}

@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)accessibilityWeekday;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)setSelected:(bool)arg1;
- (void)tintColorDidChange;

@end
