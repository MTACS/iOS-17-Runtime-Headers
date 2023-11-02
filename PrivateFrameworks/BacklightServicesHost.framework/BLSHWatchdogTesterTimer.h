
@interface BLSHWatchdogTesterTimer : NSObject <BLSHWatchdogTiming> {
    NSString * _explanation;
    bool  _invalidated;
    unsigned long long  _invalidationReason;
    bool  _sleepImminentSinceScheduled;
}

@property (nonatomic, readonly, copy) NSString *explanation;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) unsigned long long invalidationReason;
@property (getter=hasSleepBeenImminentSinceScheduled, nonatomic) bool sleepImminentSinceScheduled;

- (void).cxx_destruct;
- (id)explanation;
- (bool)hasSleepBeenImminentSinceScheduled;
- (id)initWithExplanation:(id)arg1;
- (void)invalidate:(unsigned long long)arg1;
- (unsigned long long)invalidationReason;
- (bool)isInvalidated;
- (void)setSleepImminentSinceScheduled:(bool)arg1;

@end
