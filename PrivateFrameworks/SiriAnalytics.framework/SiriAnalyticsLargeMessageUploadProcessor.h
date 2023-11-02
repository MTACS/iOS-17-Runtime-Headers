
@interface SiriAnalyticsLargeMessageUploadProcessor : NSObject {
    void metastore;
    void tagExpander;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetastore:(id)arg1;
- (id)processWithUploadEvent:(id)arg1;

@end
