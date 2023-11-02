
@interface EspressoModel : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    void * _context;
    int  _engine;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    void * _plan;
    long long  _usage;
}

@property (nonatomic) long long usage;

- (void).cxx_destruct;
- (bool)buildModelWithConfiguration:(const char *)arg1;
- (void)dealloc;
- (void)freeContext;
- (bool)initContextWithFile:(id)arg1 engine:(int)arg2 configuration:(const char *)arg3 usePreCompiled:(bool)arg4;
- (id)initMPSWithModelName:(id)arg1 usage:(long long)arg2;
- (id)initWithModelName:(id)arg1 configuration:(const char *)arg2;
- (id)initWithModelName:(id)arg1 usage:(long long)arg2;
- (int)loadModel:(id)arg1 from:(id)arg2;
- (void)setUsage:(long long)arg1;
- (bool)switchUsage:(long long)arg1;
- (long long)usage;

@end
