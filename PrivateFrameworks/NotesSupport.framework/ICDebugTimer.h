
@interface ICDebugTimer : NSObject {
    double  _elapsedTime;
    NSDate * _startingDate;
}

@property double elapsedTime;
@property (retain) NSDate *startingDate;

+ (id)debugTimerForClass:(Class)arg1;
+ (void)enableTimersForClass:(Class)arg1;

- (void).cxx_destruct;
- (double)elapsedTime;
- (void)pause;
- (void)resume;
- (void)setElapsedTime:(double)arg1;
- (void)setStartingDate:(id)arg1;
- (void)start;
- (id)startingDate;
- (void)stop;

@end
