
@interface ICSByDayValue : NSObject <NSSecureCoding> {
    NSNumber * _number;
    long long  _weekday;
}

@property (nonatomic, retain) NSNumber *number;
@property (nonatomic) long long weekday;

+ (id)byDayValueFromICSString:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)weekdayFromICSString:(id)arg1;

- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWeekday:(long long)arg1;
- (id)initWithWeekday:(long long)arg1 number:(id)arg2;
- (id)number;
- (void)setNumber:(id)arg1;
- (void)setWeekday:(long long)arg1;
- (long long)weekday;

@end
