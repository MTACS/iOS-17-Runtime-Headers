
@interface SPScheduler : NSObject {
    <SPSchedulerXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
}

@property (nonatomic, retain) <SPSchedulerXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)proxy;
- (void)publishImmediatelyWithCompletion:(id /* block */)arg1;
- (id)queue;
- (id)remoteInterface;
- (void)schedulePublishWakeWithInformation:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceDescription;
- (id)session;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;

@end
