
@interface _HKPopulationNormsAxisLabelView : UIView {
    HKPopulationNormsAxisLabel * _axisLabel;
    UIFont * _font;
    UILabel * _rangeEndLabel;
    UILabel * _rangeSeparatorLabel;
    UILabel * _rangeStartLabel;
    UIColor * _textColor;
}

@property (nonatomic, readonly) HKPopulationNormsAxisLabel *axisLabel;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)axisLabel;
- (id)font;
- (id)initWithLabel:(id)arg1;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;

@end
