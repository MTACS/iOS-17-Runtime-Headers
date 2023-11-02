
@interface HKMHDaySummary : NSObject <NSCopying, NSSecureCoding> {
    HKStateOfMind * _dailyStateOfMind;
    long long  _dayIndex;
    NSArray * _momentaryStatesOfMind;
}

@property (nonatomic, copy) HKStateOfMind *dailyStateOfMind;
@property (nonatomic, readonly) long long dayIndex;
@property (nonatomic, readonly, copy) NSArray *momentaryStatesOfMind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dailyStateOfMind;
- (long long)dayIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayIndex:(long long)arg1 momentaryStatesOfMind:(id)arg2 dailyStateOfMind:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)momentaryStatesOfMind;
- (void)setDailyStateOfMind:(id)arg1;

@end
