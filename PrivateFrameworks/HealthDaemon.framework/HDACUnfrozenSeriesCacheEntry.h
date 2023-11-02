
@interface HDACUnfrozenSeriesCacheEntry : NSObject {
    long long  _dataTypeCode;
    bool  _didFreeze;
    bool  _hasTimestampBeenSet;
    bool  _isConnectedGymSource;
    bool  _isWatchSource;
    long long  _series_identifier;
    long long  _sourceIdentifier;
    double  _timestamp;
    bool  _typeIsValidForAllDayFromCompanion;
    long long  _workoutSourceIdentifier;
}

@property (nonatomic, readonly) long long dataTypeCode;
@property (nonatomic, readonly) bool didFreeze;
@property (nonatomic, readonly) bool isConnectedGymSource;
@property (nonatomic, readonly) bool isWatchSource;
@property (nonatomic, readonly) long long series_identifier;
@property (nonatomic, readonly) long long sourceIdentifier;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) bool typeIsValidForAllDayFromCompanion;
@property (nonatomic, readonly) long long workoutSourceIdentifier;

- (long long)dataTypeCode;
- (bool)didFreeze;
- (id)initWithSeriesId:(long long)arg1 timestamp:(double)arg2 dataTypeCode:(long long)arg3 workoutSourceIdentifier:(long long)arg4 sourceIdentifier:(long long)arg5 isWatchSource:(bool)arg6 isConnectedGymSource:(bool)arg7 typeIsValidForAllDayFromCompanion:(bool)arg8;
- (bool)isConnectedGymSource;
- (bool)isWatchSource;
- (id)predicateForSeries;
- (long long)series_identifier;
- (void)setFrozen;
- (void)setTimestamp:(double)arg1;
- (long long)sourceIdentifier;
- (double)timestamp;
- (bool)typeIsValidForAllDayFromCompanion;
- (long long)workoutSourceIdentifier;

@end
