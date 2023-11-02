
@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate> {
    CBCentralManager * centralManager;
    NSMutableSet * delegates;
    long long  state;
    NSObject<OS_dispatch_queue> * workQueue;
}

@property (nonatomic, retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableSet *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)getInstance;

- (void).cxx_destruct;
- (id)_getCentralManager;
- (id)centralManager;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)delegates;
- (id)init;
- (void)registerCentralManagerDelegate:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (long long)state;
- (id)workQueue;

@end
