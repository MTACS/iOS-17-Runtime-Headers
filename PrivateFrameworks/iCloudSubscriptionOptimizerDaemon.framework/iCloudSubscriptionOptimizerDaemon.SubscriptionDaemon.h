
@interface iCloudSubscriptionOptimizerDaemon.SubscriptionDaemon : _TtCs12_SwiftObject {
    void batteryStateProvider;
    void exitTimer;
    void mainLoop;
    void mobileAssetDownloadManager;
    void stopwatch;
    void xpcServer;
}

- (void)onExitTimerRun;

@end
