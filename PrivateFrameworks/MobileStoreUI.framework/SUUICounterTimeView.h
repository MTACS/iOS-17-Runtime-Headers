
@interface SUUICounterTimeView : UIView {
    SUUIClientContext * _clientContext;
    _SUUICounterTimeFieldView * _daysFieldView;
    NSDate * _endDate;
    _SUUICounterTimeFieldView * _hoursFieldView;
    long long  _lastTimeValue;
    _SUUICounterTimeFieldView * _minutesFieldView;
    _SUUICounterTimeFieldView * _secondsFieldView;
    UIColor * _textColor;
    UIFont * _valueFont;
    unsigned long long  _visibleFields;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic) unsigned long long visibleFields;

- (void).cxx_destruct;
- (id)_allFieldViews;
- (double)_fieldSpacingForFieldCount:(long long)arg1 fieldWidth:(double)arg2 totalWidth:(double)arg3;
- (void)_setValuesUsingTimestamp:(long long)arg1;
- (id)_visibleFieldViews;
- (id)endDate;
- (id)initWithClientContext:(id)arg1;
- (void)layoutSubviews;
- (void)reloadTimeValue;
- (void)setBackgroundColor:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setValueFont:(id)arg1;
- (void)setVisibleFields:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (id)valueFont;
- (unsigned long long)visibleFields;

@end
