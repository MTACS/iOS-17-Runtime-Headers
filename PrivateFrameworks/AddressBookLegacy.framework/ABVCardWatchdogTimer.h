
@interface ABVCardWatchdogTimer : NSObject {
    NSDate * _startTime;
    unsigned long long  _ticks;
    <ABVCardTimeProvider> * _timeProvider;
    bool  _valid;
}

@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) unsigned long long ticks;
@property (nonatomic, readonly) <ABVCardTimeProvider> *timeProvider;
@property (nonatomic) bool valid;

+ (bool)shouldCheckTime;
+ (id)timerWithTimeProvider:(id)arg1;

- (void)checkValidity;
- (void)dealloc;
- (id)initWithTimeProvider:(id)arg1;
- (bool)isStarted;
- (bool)isValid;
- (void)setStartTime:(id)arg1;
- (void)setTicks:(unsigned long long)arg1;
- (void)setValid:(bool)arg1;
- (void)start;
- (id)startTime;
- (unsigned long long)ticks;
- (id)timeProvider;
- (bool)valid;

@end
