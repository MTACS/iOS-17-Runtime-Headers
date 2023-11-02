
@interface NewsUI2.AudioAutoClosePlayerHandler : NSObject <CARSessionObserving> {
    void audioStatus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  autoCloseAt;
    void autoCloseTimer;
    void carSessionStatus;
    void commandCenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  idledAt;
    void lazyPlayerViewController;
    void logDateFormatter;
    void paidBundleConfigManager;
    void playbackState;
}

- (void).cxx_destruct;
- (id)init;
- (void)sessionDidDisconnect:(id)arg1;

@end
