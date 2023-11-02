
@interface BDSReadingHistoryStateInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _currentStreak;
    BDSReadingHistoryStreakInfo * _longestStreak;
    NSArray * _readingHistory;
    BDSReadingHistoryDayInfo * _today;
}

@property (nonatomic) long long currentStreak;
@property (nonatomic, readonly) bool isEmptyState;
@property (nonatomic, retain) BDSReadingHistoryStreakInfo *longestStreak;
@property (nonatomic, retain) NSArray *readingHistory;
@property (nonatomic, retain) BDSReadingHistoryDayInfo *today;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentStreak;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentStreak:(long long)arg1 longestStreak:(id)arg2 today:(id)arg3 readingHistory:(id)arg4;
- (bool)isEmptyState;
- (bool)isEqual:(id)arg1;
- (id)longestStreak;
- (id)readingHistory;
- (void)setCurrentStreak:(long long)arg1;
- (void)setLongestStreak:(id)arg1;
- (void)setReadingHistory:(id)arg1;
- (void)setToday:(id)arg1;
- (id)today;

@end
