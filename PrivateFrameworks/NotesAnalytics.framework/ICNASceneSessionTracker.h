
@interface ICNASceneSessionTracker : NSObject {
    unsigned long long  _count;
    double  _duration;
    NSDate * _lastStartDate;
    long long  _sessionTypeEnum;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *lastStartDate;
@property (nonatomic) long long sessionTypeEnum;
@property (nonatomic, readonly) bool timerIsOn;

- (void).cxx_destruct;
- (unsigned long long)count;
- (double)duration;
- (void)endTimer;
- (id)initWithSessionTypeEnum:(long long)arg1;
- (id)lastStartDate;
- (id)sessionSummaryItemData;
- (long long)sessionTypeEnum;
- (void)setCount:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setLastStartDate:(id)arg1;
- (void)setSessionTypeEnum:(long long)arg1;
- (void)startTimer;
- (bool)timerIsOn;

@end
