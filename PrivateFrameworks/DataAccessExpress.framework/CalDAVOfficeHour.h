
@interface CalDAVOfficeHour : NSObject <NSSecureCoding> {
    bool  _enabled;
    NSDateComponents * _endDate;
    NSDateComponents * _startDate;
}

@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSDateComponents *endDate;
@property (nonatomic, copy) NSDateComponents *startDate;

+ (id)_gregorianGMTCalendar;
+ (id)dataFromOfficeHours:(id)arg1;
+ (id)icsFromOfficeHours:(id)arg1;
+ (id)logHandle;
+ (id)officeHoursFromData:(id)arg1;
+ (id)officeHoursFromICS:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
