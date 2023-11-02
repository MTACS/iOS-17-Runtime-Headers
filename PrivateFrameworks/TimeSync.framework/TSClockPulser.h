
@interface TSClockPulser : NSObject <TSClockClient> {
    bool  _hasLastTimestamp;
    bool  _holdoverMode;
    int  _lastLockState;
    TSClock * _pulseClock;
    id /* block */  _pulseHandler;
    int  _pulseOffset;
    unsigned long long  _pulsePeriod;
    unsigned int  _startSemaphore;
    unsigned int  _stopSemaphore;
    bool  _threadIsRunning;
    bool  _threadShouldBeRunning;
    bool  _useRealtimePriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pulseHandler;
@property (nonatomic) int pulseOffset;
@property (nonatomic) unsigned long long pulsePeriod;
@property (readonly) Class superclass;
@property (nonatomic) bool useRealtimePriority;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didBeginClockGrandmasterChangeForClock:(id)arg1;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (id)init;
- (id)initWithPulseClock:(id)arg1;
- (id /* block */)pulseHandler;
- (int)pulseOffset;
- (unsigned long long)pulsePeriod;
- (void)pulseThread;
- (void)setPulseHandler:(id /* block */)arg1;
- (void)setPulseOffset:(int)arg1;
- (void)setPulsePeriod:(unsigned long long)arg1;
- (void)setUseRealtimePriority:(bool)arg1;
- (bool)startPulsing;
- (bool)stopPulsing;
- (bool)useRealtimePriority;

@end
