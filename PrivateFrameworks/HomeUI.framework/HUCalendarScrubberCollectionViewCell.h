
@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell {
    UIView * _circleView;
    UILabel * _dateLabel;
    NSString * _dateString;
    UILabel * _dayMonthLabel;
    NSString * _dayOfWeekString;
    bool  _enabled;
}

@property (nonatomic, retain) UIView *circleView;
@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, copy) NSString *dateString;
@property (nonatomic, retain) UILabel *dayMonthLabel;
@property (nonatomic, copy) NSString *dayOfWeekString;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (id)circleView;
- (id)dateLabel;
- (id)dateString;
- (id)dayMonthLabel;
- (id)dayOfWeekString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (void)setCircleView:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDateString:(id)arg1;
- (void)setDayMonthLabel:(id)arg1;
- (void)setDayOfWeekString:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
