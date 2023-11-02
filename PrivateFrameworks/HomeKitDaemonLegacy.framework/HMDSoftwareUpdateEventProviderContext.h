
@interface HMDSoftwareUpdateEventProviderContext : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMEEventForwarder> * _eventForwarder;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMDSUControllerManager> * _suControllerManager;
    id /* block */  _suControllerManagerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMEEventForwarder> *eventForwarder;
@property (readonly, copy) NSString *eventSource;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) double eventTimeStamp;
@property (readonly) unsigned long long hash;
@property (retain) <HMDSUControllerManager> *suControllerManager;
@property (copy) id /* block */ suControllerManagerFactory;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (void)configureWithDelegate:(id)arg1;
- (id)eventForwarder;
- (id)eventSource;
- (id)eventStoreReadHandle;
- (double)eventTimeStamp;
- (void)forwardEvent:(id)arg1 withTopicSuffixID:(unsigned long long)arg2;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 eventStoreReadHandle:(id)arg3 eventForwarder:(id)arg4 suControllerManagerFactory:(id /* block */)arg5;
- (id)lastEventForTopicSuffixID:(unsigned long long)arg1;
- (void)managerStatus:(id /* block */)arg1;
- (void)scanWithOptions:(id)arg1;
- (void)setSuControllerManager:(id)arg1;
- (void)setSuControllerManagerFactory:(id /* block */)arg1;
- (id)suControllerManager;
- (id /* block */)suControllerManagerFactory;
- (id)workQueue;

@end
