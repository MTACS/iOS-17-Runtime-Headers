
@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding> {
    bool  _allDay;
    NSDate * _date;
    NSTimeZone * _timeZone;
}

@property (getter=isAllDay, nonatomic, readonly) bool allDay;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 allDay:(bool)arg2 timeZone:(id)arg3;
- (id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2;
- (id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (id)timeZone;

@end
