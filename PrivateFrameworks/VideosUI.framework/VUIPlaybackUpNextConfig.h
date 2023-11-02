
@interface VUIPlaybackUpNextConfig : NSObject {
    double  _autoPlayTimerDuration;
    double  _bootstrapInterval;
    double  _documentUpdateOffsetInterval;
    double  _duration;
    unsigned long long  _maximumAutoPlayableItems;
    double  _minAutoPlayStopTime;
    double  _minTimeIntervalFromEndToDisplay;
}

@property (nonatomic) double autoPlayTimerDuration;
@property (nonatomic) double bootstrapInterval;
@property (nonatomic) double documentUpdateOffsetInterval;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long maximumAutoPlayableItems;
@property (nonatomic) double minAutoPlayStopTime;
@property (nonatomic) double minTimeIntervalFromEndToDisplay;

- (double)autoPlayTimerDuration;
- (double)bootstrapInterval;
- (double)documentUpdateOffsetInterval;
- (double)duration;
- (id)init;
- (unsigned long long)maximumAutoPlayableItems;
- (double)minAutoPlayStopTime;
- (double)minTimeIntervalFromEndToDisplay;
- (void)setAutoPlayTimerDuration:(double)arg1;
- (void)setBootstrapInterval:(double)arg1;
- (void)setDocumentUpdateOffsetInterval:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setMaximumAutoPlayableItems:(unsigned long long)arg1;
- (void)setMinAutoPlayStopTime:(double)arg1;
- (void)setMinTimeIntervalFromEndToDisplay:(double)arg1;

@end
