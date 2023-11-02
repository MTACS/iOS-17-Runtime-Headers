
@interface TITypologyStatisticTimeElapsed : TITypologyStatistic {
    TITypologyTimer * _adjustedTimer;
    TITypologyTimer * _timer;
}

@property (nonatomic, readonly) double adjustedElapsedTime;
@property (nonatomic, retain) TITypologyTimer *adjustedTimer;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, retain) TITypologyTimer *timer;

- (void).cxx_destruct;
- (double)adjustedElapsedTime;
- (id)adjustedTimer;
- (id)aggregateReport;
- (double)elapsedTime;
- (id)init;
- (void)setAdjustedTimer:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)structuredReport;
- (id)timer;
- (void)visitRecordKeyboardInput:(id)arg1;

@end
