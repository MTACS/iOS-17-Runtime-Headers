
@interface ATXTrendPlotBin : NSObject {
    id  _data;
    NSDate * _endDate;
    ATXTrendPlotBin * _next;
    NSDate * _startDate;
}

@property (nonatomic, retain) id data;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) ATXTrendPlotBin *next;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)data;
- (id)endDate;
- (id)initWithStartDate:(id)arg1;
- (id)next;
- (void)setData:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
