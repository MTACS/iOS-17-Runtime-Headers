
@interface HomeDataModel.CoordinationDataModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentStateSnapshot;
    void currentHome;
    void incomingCoordinationMessagesQueue;
    void managers;
    void mtAlarms;
    void mtTimers;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stateSnapshotUpdatesStream;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updateStateSnapshot;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
