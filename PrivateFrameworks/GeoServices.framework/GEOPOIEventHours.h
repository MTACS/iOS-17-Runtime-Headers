
@interface GEOPOIEventHours : NSObject <NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSArray * _hours;
}

@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, retain) NSArray *hours;

+ (id)eventHoursForDateTimeRanges:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)hours;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (id)initWithDateTimeRange:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHours:(id)arg1;

@end
