
@interface SCLDailySchedule : SCLSchedule {
    NSMutableDictionary * _dayMap;
}

@property (nonatomic, retain) NSMutableDictionary *dayMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayMap;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeForDay:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedule:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recurrences;
- (id)scheduleForDay:(long long)arg1;
- (void)setDayMap:(id)arg1;
- (id)startTimeForDay:(long long)arg1;

@end
