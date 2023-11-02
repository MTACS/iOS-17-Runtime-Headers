
@interface EKUISpanView : UIView {
    NSDate * _endDate;
    bool  _inset;
    NSDate * _startDate;
}

@property (retain) NSDate *endDate;
@property bool inset;
@property (retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (bool)inset;
- (void)setEndDate:(id)arg1;
- (void)setInset:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
