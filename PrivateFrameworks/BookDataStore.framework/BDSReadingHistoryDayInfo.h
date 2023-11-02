
@interface BDSReadingHistoryDayInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _goal;
    bool  _isStreakDay;
    long long  _readingTime;
}

@property (nonatomic) long long goal;
@property (nonatomic) bool isStreakDay;
@property (nonatomic) long long readingTime;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)goal;
- (id)initWithCoder:(id)arg1;
- (id)initWithReadingTime:(long long)arg1 goal:(long long)arg2 isStreakDay:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isStreakDay;
- (long long)readingTime;
- (void)setGoal:(long long)arg1;
- (void)setIsStreakDay:(bool)arg1;
- (void)setReadingTime:(long long)arg1;

@end
