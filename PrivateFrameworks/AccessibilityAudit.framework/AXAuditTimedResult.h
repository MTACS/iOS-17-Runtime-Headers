
@interface AXAuditTimedResult : NSObject {
    NSDate * _endTime;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, readonly) NSString *executionTimeString;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (id)endTime;
- (id)executionTimeString;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
