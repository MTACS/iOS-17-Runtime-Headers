
@interface FMIPCore.FMIPRefreshingController : _TtCs12_SwiftObject {
    void apsConnectionHandler;
    void callbackInterval;
    void delegate;
    void identifier;
    void interactionController;
    void isInitializing;
    void isRefreshing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshTime;
    void maxCallbackInterval;
    void minCallbackInterval;
    void ownerPhoneNumber;
    void rangingParameters;
    void refreshQueue;
    void refreshTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectedDevice;
    void tapContexts;
}

- (void)refreshTimerFired;

@end
