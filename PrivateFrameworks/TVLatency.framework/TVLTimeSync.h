
@interface TVLTimeSync : NSObject <TSClockClient> {
    unsigned int  _IPv4;
    NSData * _IPv6;
    TSgPTPClock * _clock;
    bool  _master;
    NSString * _networkInterfaceName;
    CUMessageSession * _session;
    NSObject<OS_dispatch_semaphore> * _waitForPTPLock;
}

@property (nonatomic) unsigned int IPv4;
@property (nonatomic, copy) NSData *IPv6;
@property (nonatomic, retain) TSgPTPClock *clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMaster, nonatomic) bool master;
@property (nonatomic, copy) NSString *networkInterfaceName;
@property (nonatomic, retain) CUMessageSession *session;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForPTPLock;

+ (void)invalidate;
+ (void)timeSyncWithRemoteIPv4:(id)arg1 IPv6:(id)arg2 interface:(id)arg3 session:(id)arg4 master:(bool)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (unsigned int)IPv4;
- (id)IPv6;
- (void)_clearWaitForPTPClock;
- (void)_startPTPWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clock;
- (unsigned long long)convertToDomainTimeFromHostTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long*)arg2;
- (unsigned long long)convertToHostTimeFromDomainTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long*)arg2;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (id)initWithRemoteIPv4:(id)arg1 IPv6:(id)arg2 interface:(id)arg3;
- (void)invalidate;
- (bool)isMaster;
- (void)negotiateGrandmasterIdentityAttempt:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)networkInterfaceName;
- (id)session;
- (void)setClock:(id)arg1;
- (void)setIPv4:(unsigned int)arg1;
- (void)setIPv6:(id)arg1;
- (void)setMaster:(bool)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setWaitForPTPLock:(id)arg1;
- (id)waitForPTPLock;

@end
