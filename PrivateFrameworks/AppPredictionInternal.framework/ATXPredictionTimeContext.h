
@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    double  _absoluteDate;
    bool  _dateInWeekend;
    int  _dayOfWeek;
    int  _timeOfDay;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool dateInWeekend;
@property (nonatomic, readonly) int dayOfWeek;
@property (nonatomic, readonly) int timeOfDay;

- (id)date;
- (bool)dateInWeekend;
- (int)dayOfWeek;
- (id)description;
- (id)encodeAsProto;
- (id)initWithDate:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionTimeContext:(id)arg1;
- (id)jsonDict;
- (id)proto;
- (void)setDate:(id)arg1;
- (int)timeOfDay;

@end
