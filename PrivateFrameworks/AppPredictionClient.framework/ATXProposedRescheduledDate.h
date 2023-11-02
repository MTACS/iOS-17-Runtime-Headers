
@interface ATXProposedRescheduledDate : NSObject <NSSecureCoding> {
    NSDateComponents * _components;
    NSDate * _dateTime;
    ATXTime * _fuzzyTimeRangeEnd;
    ATXTime * _fuzzyTimeRangeStart;
    long long  _type;
}

@property (nonatomic, readonly) NSDateComponents *components;
@property (nonatomic, readonly) NSDate *dateTime;
@property (nonatomic, readonly) ATXTime *fuzzyTimeRangeEnd;
@property (nonatomic, readonly) ATXTime *fuzzyTimeRangeStart;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)components;
- (id)dateTime;
- (void)encodeWithCoder:(id)arg1;
- (id)fuzzyTimeRangeEnd;
- (id)fuzzyTimeRangeStart;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateTime:(id)arg1;
- (id)initWithDayComponents:(id)arg1;
- (id)initWithDayComponents:(id)arg1 fuzzyTimeRangeStart:(id)arg2 fuzzyTimeRangeEnd:(id)arg3;
- (id)initWithHourComponents:(id)arg1;
- (long long)type;

@end
