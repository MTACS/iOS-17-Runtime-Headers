
@interface CRKExecutionTimer : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
    NSString * _timerDescription;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly, copy) NSString *timerDescription;

+ (id)startedTimerWithDescription:(id)arg1;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithDescription:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;
- (id)stop;
- (id)timerDescription;

@end
