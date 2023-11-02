
@interface ICSharedListeningConnectionReportEvent : NSObject {
    NSDate * _endDate;
    NSError * _error;
    NSString * _name;
    NSDate * _startDate;
    NSMutableArray * _subEvents;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSMutableArray *subEvents;

- (void).cxx_destruct;
- (void)addSubEvent:(id)arg1;
- (double)duration;
- (id)endDate;
- (id)error;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setEndDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSubEvents:(id)arg1;
- (id)startDate;
- (id)subEvents;

@end
