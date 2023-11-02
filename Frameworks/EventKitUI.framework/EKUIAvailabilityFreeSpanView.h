
@interface EKUIAvailabilityFreeSpanView : UIView {
    UIColor * _borderColor;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (retain) UIColor *borderColor;
@property (retain) NSDate *endDate;
@property (retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)borderColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)endDate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andColor:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 isFreeSpan:(bool)arg5;
- (void)setBorderColor:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
