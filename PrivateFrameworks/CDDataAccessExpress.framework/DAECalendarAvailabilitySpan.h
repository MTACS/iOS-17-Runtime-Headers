
@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSDate * _startDate;
    long long  _type;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;
- (id)startDate;
- (long long)type;

@end
