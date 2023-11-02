
@interface HDDataAggregatorConfiguration : NSObject <NSCopying> {
    double  _aggregationInterval;
    double  _collectionLatency;
    bool  _hasActiveWorkout;
    bool  _hasForegroundObserver;
    double  _maximumSeriesDuration;
}

@property (nonatomic, readonly) double aggregationInterval;
@property (nonatomic, readonly) double collectionLatency;
@property (nonatomic, readonly) bool hasActiveWorkout;
@property (nonatomic) bool hasForegroundObserver;
@property (nonatomic, readonly) double maximumSeriesDuration;

+ (id)configurationWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(bool)arg4 foregroundObserver:(bool)arg5;

- (double)aggregationInterval;
- (double)collectionLatency;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasActiveWorkout;
- (bool)hasForegroundObserver;
- (bool)isEqual:(id)arg1;
- (double)maximumSeriesDuration;
- (void)setHasForegroundObserver:(bool)arg1;

@end
