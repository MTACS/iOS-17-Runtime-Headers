
@interface HMDMessageFilter : HMFObject <HMFLogging> {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)queue;
- (void)resetConfiguration;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldCloudSyncData;
- (id)workQueue;

@end
