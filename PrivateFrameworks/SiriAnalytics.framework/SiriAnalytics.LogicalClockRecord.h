
@interface SiriAnalytics.LogicalClockRecord : _TtCs12_SwiftObject {
    void active;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bootSessionUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  clockIdentifier;
    void derivativeClocks;
    void endedOn;
    void lastEvent;
    void startedOn;
}

@end
