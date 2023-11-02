
@interface SportsKit.SportingEventRunningClock : NSObject {
    void currentStopValue;
    void features;
    void isCountingDown;
    void isEventClockRunning;
    void isSupported;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  runningClockInterval;
    void staticClockValue;
    void version;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
