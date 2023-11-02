
@interface WLThroughputSample : NSObject {
    unsigned long long  _bytes;
    double  _duration;
    NSDate * _endDate;
    unsigned long long  _expectedBytes;
    NSDate * _startDate;
}

@property (nonatomic) unsigned long long bytes;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) unsigned long long expectedBytes;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (unsigned long long)bytes;
- (double)duration;
- (id)endDate;
- (unsigned long long)expectedBytes;
- (void)setBytes:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpectedBytes:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
