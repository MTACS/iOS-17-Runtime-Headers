
@interface NTKSwissMoonPhaseDailyView : UIView {
    UILabel * _dayLabel;
    NTKAstronomyRichComplicationContentView * _moonView;
    UILabel * _weekdayLabel;
}

@property (nonatomic, retain) UILabel *dayLabel;
@property (nonatomic, retain) NTKAstronomyRichComplicationContentView *moonView;
@property (nonatomic, retain) UILabel *weekdayLabel;

- (void).cxx_destruct;
- (id)dayLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)moonView;
- (void)setDayLabel:(id)arg1;
- (void)setMoonView:(id)arg1;
- (void)setWeekdayLabel:(id)arg1;
- (id)weekdayLabel;

@end
