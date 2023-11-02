
@interface DockKitCore.TrajectoryController : NSObject {
    void controlMode;
    void controllerPeriod;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void lookaheadSeconds;
    void maxGoalDelay;
    void maxGoalError;
    void maxPathError;
    void minVelocity;
    void pid;
    void startTime;
    void trajectory;
}

- (void).cxx_destruct;
- (id)init;

@end
