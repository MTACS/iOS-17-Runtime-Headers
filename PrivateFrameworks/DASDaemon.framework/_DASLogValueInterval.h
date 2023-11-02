
@interface _DASLogValueInterval : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
    NSObject * _value;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSObject *value;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)durationString;
- (id)endDate;
- (id)intervalString;
- (bool)isEqual:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)startDate;
- (id)value;

@end
