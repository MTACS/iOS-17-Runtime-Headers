
@interface WLKSchedule : NSObject {
    NSDictionary * _dictionary;
    NSDate * _endDate;
    NSMutableArray * _mutableEvents;
    NSString * _serviceID;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *events;
@property (nonatomic, readonly, copy) NSString *serviceID;
@property (nonatomic, readonly, copy) NSDate *startDate;

- (void).cxx_destruct;
- (bool)_isDate:(id)arg1 containedByDate:(id)arg2 andDate:(id)arg3;
- (id)adjacentEventsForDate:(id)arg1 fuzziness:(double)arg2;
- (id)endDate;
- (id)eventAfterDate:(id)arg1;
- (id)eventForDate:(id)arg1;
- (id)eventForDate:(id)arg1 fuzziness:(double)arg2;
- (id)events;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)prune;
- (id)serviceID;
- (id)startDate;

@end
