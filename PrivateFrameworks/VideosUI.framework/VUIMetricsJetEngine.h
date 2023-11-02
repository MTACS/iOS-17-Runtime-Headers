
@interface VUIMetricsJetEngine : NSObject {
    void recorder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sharedPipeline;
    void wrappedPipeline;
}

@property (nonatomic, retain) NSObject *wrappedPipeline;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)flushMetrics;
- (void)flushMetricsWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isSharedContent:(id)arg1;
- (id)recordEventWithTopic:(id)arg1 eventType:(id)arg2 eventData:(id)arg3 lastPageEvent:(id)arg4;
- (void)setMonitorsLifecycleEvents:(bool)arg1;
- (void)setWrappedPipeline:(id)arg1;
- (id)wrappedPipeline;

@end
