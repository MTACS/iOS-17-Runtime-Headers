
@interface AMUIDateTimeView : UIView {
    NSDate * _date;
    UIFont * _dateFont;
    UILabel * _dateLabel;
    UIColor * _textColor;
    UIFont * _timeFont;
    UILabel * _timeLabel;
    NSLayoutConstraint * _timeLabelYOffsetConstraint;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) UIFont *dateFont;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) UIFont *timeFont;

+ (id)defaultDateFont;
+ (id)defaultTimeFont;

- (void).cxx_destruct;
- (void)_updateLabels;
- (id)date;
- (id)dateFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDate:(id)arg1;
- (void)setDateFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeFont:(id)arg1;
- (id)textColor;
- (id)timeFont;
- (void)updateConstraints;

@end
