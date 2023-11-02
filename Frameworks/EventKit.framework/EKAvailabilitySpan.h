
@interface EKAvailabilitySpan : NSObject <CalDateRangeProtocol> {
    NSDate * _endDate;
    NSDate * _startDate;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(long long)arg1;
- (id)startDate;
- (long long)type;

@end
