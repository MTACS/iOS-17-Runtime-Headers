
@interface AppAnalytics.UploadBatchEventProcessor : _TtCs12_SwiftObject <AAFlushable> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentSession;
    void isEnabled;
    void uploadManager;
}

- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;

@end
