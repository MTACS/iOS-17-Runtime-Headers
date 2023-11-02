
@interface _TtC28SiriPrivateLearningAnalyticsP33_95987ADD223C83697EEA450CF0CC3A3519ScanTurnsSubscriber : NSObject <BPSSubscriber> {
    void downstream;
    void endpointer;
    void eventTables;
    void innerSubscription;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousTurnId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  turnsStartDateTime;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;

@end
