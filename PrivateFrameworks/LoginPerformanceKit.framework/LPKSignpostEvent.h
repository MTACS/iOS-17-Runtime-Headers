
@interface LPKSignpostEvent : NSObject {
    double  _duration;
    NSDate * _endDate;
    NSString * _name;
    NSString * _processName;
    NSDate * _startDate;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *processName;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (void)_calculateDurationIfNeeded;
- (double)duration;
- (id)endDate;
- (id)name;
- (id)processName;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
