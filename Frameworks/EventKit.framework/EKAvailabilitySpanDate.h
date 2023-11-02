
@interface EKAvailabilitySpanDate : NSObject {
    long long  _dateType;
    NSDate * _spanDate;
    long long  _spanType;
}

@property long long dateType;
@property (nonatomic, retain) NSDate *spanDate;
@property long long spanType;

+ (unsigned int)valueForSpanType:(long long)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (long long)dateType;
- (id)description;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3;
- (void)setDateType:(long long)arg1;
- (void)setSpanDate:(id)arg1;
- (void)setSpanType:(long long)arg1;
- (id)spanDate;
- (long long)spanType;

@end
