
@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    double  _lastLayoutWidth;
    UILabel * _recurrenceLabel;
}

- (void).cxx_destruct;
- (id)_myTableView;
- (id)_recurrenceLabel;
- (double)height;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setRecurrenceString:(id)arg1;

@end
