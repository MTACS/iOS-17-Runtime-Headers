
@interface PKMonthDayCollectionViewCell : UICollectionViewCell {
    UIView * _bottomLine;
    UILabel * _dayLabel;
    long long  _dayNumber;
    bool  _enabled;
    UIView * _leftLine;
    UIView * _topLine;
}

@property (nonatomic) long long dayNumber;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (long long)dayNumber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (void)setDayNumber:(long long)arg1;
- (void)setDayNumber:(long long)arg1 withTitle:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
