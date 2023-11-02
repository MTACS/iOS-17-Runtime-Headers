
@interface MSStopwatch : NSObject {
    unsigned long long  _elapsedTime;
    unsigned long long  _elapsedTimeMS;
    unsigned long long  _elapsedTimeSeconds;
    bool  _isLocked;
    NSMutableArray * _laps;
    unsigned long long  _lastLapTime;
    unsigned long long  _startTime;
    long long  _status;
    unsigned long long  _stopTime;
}

@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long elapsedTimeMS;
@property (nonatomic) unsigned long long elapsedTimeSeconds;
@property (nonatomic) bool isLocked;
@property (nonatomic, retain) NSMutableArray *laps;
@property (nonatomic) unsigned long long lastLapTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long stopTime;

- (void).cxx_destruct;
- (unsigned long long)elapsedTime;
- (unsigned long long)elapsedTimeMS;
- (unsigned long long)elapsedTimeSeconds;
- (id)init;
- (bool)isLocked;
- (void)lap;
- (void)lapWithName:(id)arg1;
- (id)laps;
- (unsigned long long)lastLapTime;
- (void)reset;
- (void)setElapsedTime:(unsigned long long)arg1;
- (void)setElapsedTimeMS:(unsigned long long)arg1;
- (void)setElapsedTimeSeconds:(unsigned long long)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setLaps:(id)arg1;
- (void)setLastLapTime:(unsigned long long)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStopTime:(unsigned long long)arg1;
- (void)start;
- (unsigned long long)startTime;
- (long long)status;
- (void)stop;
- (unsigned long long)stopTime;
- (void)toggleLock:(bool)arg1;

@end
