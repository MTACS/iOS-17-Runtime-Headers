
@interface _NSSwiftTimeZone : _NSTimeZoneBridge {
    void timeZone;
}

@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool daylightSavingTime;
@property (nonatomic, readonly) double daylightSavingTimeOffset;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *nextDaylightSavingTimeTransition;
@property (nonatomic, readonly) long long secondsFromGMT;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (Class)classForCoder;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (bool)isDaylightSavingTime;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (long long)secondsFromGMT;
- (long long)secondsFromGMTForDate:(id)arg1;

@end
