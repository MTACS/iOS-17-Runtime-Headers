
@interface ContactlessReaderUI.InterruptionMonitor : NSObject <CXCallObserverDelegate, SBSHardwareButtonEventConsuming> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _interruption;
    void callObserver;
    void delegate;
    void hardwareButtonConsumer;
    void layoutMonitor;
}

- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (id)init;

@end
