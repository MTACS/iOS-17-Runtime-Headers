
@interface DockKitCore.RateControl : NSObject {
    void lastFps;
    void lastSecs;
    void lastTriggerSecs;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxFps;
    void maxSecsElapsed;
    void minFps;
    void minSecsElapsed;
    void totalFramesElapsed;
    void totalTimeElapsed;
}

- (void).cxx_destruct;
- (id)init;

@end
