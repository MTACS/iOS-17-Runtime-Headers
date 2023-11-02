
@interface SiriInference.HolidaysDBUpdater : SiriInference.HolidaysDatabase {
    void catalogUpdateFunction;
    void delayedRequeueFunction;
    void downloadFunction;
    void findUpdatesFunction;
    void installUpdateFunction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastCheck;
    void localDBVersion;
    void requeueFunction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
}

@end
