
@interface HVPowerBudgetThrottlingState : NSObject {
    unsigned long long  _absTimeAtOpStart;
    bool  _dirty;
    int  _fd;
    bool  _hasClassCUnlock;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    bool  _opInProgress;
    struct { 
        unsigned int magic; 
        int opsLeft; 
        long long nsecLeft; 
        int extraOpsLeft; 
        int budgetState; 
        long long timeOfLastChange; 
    }  _state;
    unsigned long long  _timeSinceOpStart;
    bool  _wasEnabled;
    bool  _wasOnBattery;
}

- (void).cxx_destruct;
- (unsigned char)canDoDiscretionaryWork;
- (unsigned char)canDoDiscretionaryWork:(unsigned int*)arg1;
- (unsigned char)canDoExtraDiscretionaryWork;
- (void)checkBatteryStateForRefill;
- (void)dealloc;
- (void)didConsumeAnExtraBudgetedOperation;
- (void)endWork;
- (id)initWithPath:(id)arg1 log:(id)arg2;
- (void)refillState;
- (void)startWork;
- (id)state;
- (void)updateState:(unsigned int)arg1;

@end
