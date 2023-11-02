
@interface BDSReadingHistoryModelSnapshotInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _lastSource;
    long long  _loaded;
    BDSReadingHistoryStreakInfo * _modelLongestStreak;
    BDSReadingHistoryDayInfo * _modelReadingDay;
    BDSReadingHistoryStreakInfo * _remoteModelLongestStreak;
    BDSReadingHistoryDayInfo * _remoteModelReadingDay;
}

@property (nonatomic) long long lastSource;
@property (nonatomic) long long loaded;
@property (nonatomic, retain) BDSReadingHistoryStreakInfo *modelLongestStreak;
@property (nonatomic, retain) BDSReadingHistoryDayInfo *modelReadingDay;
@property (nonatomic, retain) BDSReadingHistoryStreakInfo *remoteModelLongestStreak;
@property (nonatomic, retain) BDSReadingHistoryDayInfo *remoteModelReadingDay;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoaded:(long long)arg1 lastSource:(long long)arg2 modelReadingDay:(id)arg3 modelLongestStreak:(id)arg4 remoteModelReadingDay:(id)arg5 remoteModelLongestStreak:(id)arg6;
- (long long)lastSource;
- (long long)loaded;
- (id)modelLongestStreak;
- (id)modelReadingDay;
- (id)remoteModelLongestStreak;
- (id)remoteModelReadingDay;
- (void)setLastSource:(long long)arg1;
- (void)setLoaded:(long long)arg1;
- (void)setModelLongestStreak:(id)arg1;
- (void)setModelReadingDay:(id)arg1;
- (void)setRemoteModelLongestStreak:(id)arg1;
- (void)setRemoteModelReadingDay:(id)arg1;

@end
