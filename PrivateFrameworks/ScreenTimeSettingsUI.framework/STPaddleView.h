
@interface STPaddleView : UIView {
    UIView * _backgroundView;
    STUsageReportGraphDataPoint * _dataPoint;
    UILabel * _dateTimeLabel;
    UILabel * _dayLabel;
    NSDateIntervalFormatter * _hourIntervalDateFormatter;
    NSDateFormatter * _monthDateFormatter;
    UILabel * _usageLabel;
    NSDateFormatter * _weekdayDateFormatter;
}

@property (readonly) UIView *backgroundView;
@property (nonatomic, retain) STUsageReportGraphDataPoint *dataPoint;
@property (readonly) UILabel *dateTimeLabel;
@property (readonly) UILabel *dayLabel;
@property (readonly) NSDateIntervalFormatter *hourIntervalDateFormatter;
@property (readonly) NSDateFormatter *monthDateFormatter;
@property (readonly) UILabel *usageLabel;
@property (readonly) NSDateFormatter *weekdayDateFormatter;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)dataPoint;
- (id)dateTimeLabel;
- (id)dayLabel;
- (id)hourIntervalDateFormatter;
- (id)init;
- (id)monthDateFormatter;
- (void)setDataPoint:(id)arg1;
- (id)usageLabel;
- (id)weekdayDateFormatter;

@end
