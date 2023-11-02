
@interface AppAnalytics.UploadManager : _TtCs12_SwiftObject <AAFlushable> {
    void batchIdentifiers;
    void config;
    void dropbox;
    void flushQueue;
    void lock;
    void service;
}

- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;

@end
