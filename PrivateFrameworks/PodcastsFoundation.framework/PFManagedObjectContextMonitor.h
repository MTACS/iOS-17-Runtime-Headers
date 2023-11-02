
@interface PFManagedObjectContextMonitor : NSObject {
    void context;
    void criticalHangDuration;
    void criticalHangRepeatInterval;
    void label;
    void lock;
    void loggedFault;
    void multiTimer;
    void pingInterval;
    void pingTimer;
    void severeHangDuration;
    void shortHangDuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signpost;
    void status;
}

- (void).cxx_destruct;
- (void)beginMonitoring;
- (void)endMonitoring;
- (id)init;
- (id)initWithContext:(id)arg1 label:(long long)arg2 pingInterval:(double)arg3 shortHangDuration:(double)arg4 severeHangDuration:(double)arg5 criticalHangDuration:(double)arg6 criticalHangRepeatInterval:(double)arg7;

@end
