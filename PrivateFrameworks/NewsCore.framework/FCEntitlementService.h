
@interface FCEntitlementService : NSObject {
    NFMutexLock * _accessLock;
    NSMutableArray * _blocks;
    <FCCoreConfigurationManager> * _configurationManager;
    NSTimer * _entitlementRequestTimer;
    bool  _requestInProgress;
}

@property (nonatomic, retain) NFMutexLock *accessLock;
@property (nonatomic, retain) NSMutableArray *blocks;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, retain) NSTimer *entitlementRequestTimer;
@property (nonatomic) bool requestInProgress;

- (void).cxx_destruct;
- (void)_performEntitlementWithIgnoreCache:(bool)arg1 requestTimeoutDuration:(long long)arg2 completion:(id /* block */)arg3;
- (id)accessLock;
- (id)blocks;
- (void)clearTimer;
- (id)configurationManager;
- (id)entitlementRequestTimer;
- (id)initWithConfigurationManager:(id)arg1;
- (void)performEntitlementWithIgnoreCache:(bool)arg1 completion:(id /* block */)arg2;
- (bool)requestInProgress;
- (void)setAccessLock:(id)arg1;
- (void)setBlocks:(id)arg1;
- (void)setEntitlementRequestTimer:(id)arg1;
- (void)setRequestInProgress:(bool)arg1;
- (void)startTimerWithTimeoutDuration:(double)arg1;

@end
