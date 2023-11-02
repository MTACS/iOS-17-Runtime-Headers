
@interface AppAnalytics.SessionManager : _TtCs12_SwiftObject <AAFlushable> {
    void accessGroup;
    void accessQueue;
    void appSessionProvider;
    void dataStacks;
    void flushProcessor;
    void observers;
    void options;
    void processorManager;
    void sessionGroupManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void timestampConfigurationProvider;
    void tracker;
}

- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;

@end
