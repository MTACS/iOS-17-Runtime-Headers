
@interface SiriAnalyticsPreprocessor : NSObject {
    void fbf;
    void localStorage;
    void messageStaging;
    void messageTailing;
    void metastore;
    void metastoreQueue;
    void telemetry;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetastore:(id)arg1 metastoreQueue:(id)arg2 fbf:(id)arg3 telemetry:(id)arg4 messageTailing:(id)arg5 messageStaging:(id)arg6 localStorage:(id)arg7;
- (void)processWithReason:(long long)arg1 completion:(id /* block */)arg2;

@end
