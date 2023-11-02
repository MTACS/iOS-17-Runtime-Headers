
@interface VCNetworkSimulator : NSObject {
    bool  _isQueueEmpty;
    bool  _isStarted;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    VCEmulatedNetwork * _network;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _packetPushedCondition;
    NSDictionary * _policies;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _queueEmptyCondition;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; id x4; int (*x5)(); void *x6; struct OpaqueFigThread {} *x7; int x8; BOOL x9[60]; unsigned int x10; unsigned int x11; } * _thread;
}

@property (nonatomic, readonly) VCEmulatedNetwork *network;

+ (id)sharedInstance;

- (id)createDefaultPolicies;
- (void)dealloc;
- (id)init;
- (id)loadPoliciesFromJson;
- (id)network;
- (int)processNetwork;
- (void)setupNetwork;
- (void)start;
- (void)stop;
- (int)waitForCondition:(struct _opaque_pthread_cond_t { long long x1; BOOL x2[40]; }*)arg1 withTimeout:(double)arg2 conditionPredicate:(bool*)arg3;

@end
