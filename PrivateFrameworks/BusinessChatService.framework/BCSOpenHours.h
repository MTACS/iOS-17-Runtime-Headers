
@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding> {
    NSTimeZone * _localTimeZone;
    NSDictionary * _timeRanges;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateWhenOpenNextAfterDate:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2;
- (id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2;
- (id)initWithJSONObj:(id)arg1 timeZone:(id)arg2;
- (id)initWithOpenHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithTimeRanges:(id)arg1 timeZone:(id)arg2;
- (bool)isOpenAtDate:(id)arg1;

@end
