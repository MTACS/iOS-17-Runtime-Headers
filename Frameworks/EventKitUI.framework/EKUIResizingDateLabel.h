
@interface EKUIResizingDateLabel : UILabel {
    NSDate * _date;
}

@property (retain) NSDate *date;

- (void).cxx_destruct;
- (id)date;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)minDateLabelWidth;
- (void)setDate:(id)arg1;
- (id)stringForDateThatFits;

@end
