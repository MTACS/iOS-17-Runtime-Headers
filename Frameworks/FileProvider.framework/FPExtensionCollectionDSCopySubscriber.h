
@interface FPExtensionCollectionDSCopySubscriber : NSObject {
    bool  _dsCopyIsObserving;
    bool  _dsCopyShouldStopAccessingSubscriberURL;
    id  _dsCopySubscriber;
    NSObject<OS_dispatch_queue> * _dsCopySubscriberQueue;
    NSURL * _dsCopySubscriberURL;
}

- (void).cxx_destruct;
- (id)init;
- (void)markObserving;
- (void)startMonitoringWithURL:(id)arg1 publishingHandler:(id /* block */)arg2;
- (void)stopMonitoring;

@end
