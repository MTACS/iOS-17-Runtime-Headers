
@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime {
    NSDateInterval * _dateInterval;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1;
- (bool)isActiveForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeType;

@end
