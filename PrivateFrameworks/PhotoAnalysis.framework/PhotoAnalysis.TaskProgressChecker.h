
@interface PhotoAnalysis.TaskProgressChecker : _TtCs12_SwiftObject {
    void lastProgress;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void numberOfCallsToProgressSinceLastRecordedCall;
    void timestampOfLastCallToProgress;
    void timestampOfLastRecordedCallToProgress;
    void wasStopped;
}

@end
