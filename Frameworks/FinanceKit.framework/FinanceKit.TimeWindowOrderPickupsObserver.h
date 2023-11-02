
@interface FinanceKit.TimeWindowOrderPickupsObserver : _TtCs12_SwiftObject {
    void callback;
    void context;
    void coreDataStore;
    void lastOrderPickupsSet;
    void lastToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeWindow;
}

- (void)handleWithNotification:(id)arg1;

@end
