
@interface ATXDuetEvent : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSUUID * _locationIdentifier;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, copy) NSUUID *locationIdentifier;
@property (nonatomic, readonly) NSDate *startDate;

+ (long long)_secondsInDayFromDate:(id)arg1 calendar:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (long long)endDateSecondsAfterMidnight;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)isEndDateOnWeekday;
- (bool)isEqual:(id)arg1;
- (bool)isStartDateOnWeekday;
- (id)locationIdentifier;
- (id)locationIdentifierUUIDString;
- (void)setEndDate:(id)arg1;
- (void)setLocationIdentifier:(id)arg1;
- (id)startDate;
- (long long)startDateSecondsAfterMidnight;
- (void)tagWithLocationOfInterestIdentifier:(id)arg1;

@end
