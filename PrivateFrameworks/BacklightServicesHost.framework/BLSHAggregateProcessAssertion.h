
@interface BLSHAggregateProcessAssertion : NSObject <BSInvalidatable> {
    double  _initTimestamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHAggregatedProcessAssertion * _lock_acquiredAssertion;
    NSMapTable * _lock_aggregated;
    BLSHDurationCalculator * _lock_durationCalculator;
    bool  _lock_invalidated;
    RBSAssertion * _lock_rbsAssertion;
    RBSProcessIdentity * _processIdentity;
    unsigned long long  _stateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property (readonly) Class superclass;

+ (void)acquireAggregatedAssertion:(id)arg1 completion:(id /* block */)arg2;
+ (id)classLock_aggregateForProcessIdentity:(id)arg1 shouldCreate:(bool)arg2;
+ (void)invalidateAggregatedAssertion:(id)arg1;

- (void).cxx_destruct;
- (void)acquireAggregatedAssertion:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithProcessIdentity:(id)arg1;
- (void)invalidate;
- (bool)invalidateAggregatedAssertion:(id)arg1;
- (bool)isCurrentRBSAssertion:(id)arg1;
- (id)processIdentity;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
