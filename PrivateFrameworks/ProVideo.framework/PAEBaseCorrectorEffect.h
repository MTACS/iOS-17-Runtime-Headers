
@interface PAEBaseCorrectorEffect : NSObject <FxFilter> {
    void * _actionCount;
    <PROAPIAccessing> * _apiManager;
    int  _hostApplication;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _resyncCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _resyncMutex;
    void * _resyncOnce;
    NSObject<OS_dispatch_queue> * _resyncQueue;
}

@property (readonly) <PROAPIAccessing> *apiManager;

+ (unsigned long long)colorPrimaries:(id)arg1;
+ (id)getterAPI:(id)arg1;
+ (id)keyframingAPI:(id)arg1;
+ (id)setterAPI:(id)arg1;
+ (id)temporalImageAPI:(id)arg1;

- (void)_resyncAtTime:(const union { double x1; struct { /* ? */ } *x2; }*)arg1 apiManager:(id)arg2;
- (void)_resyncOnceAtTime:(const union { double x1; struct { /* ? */ } *x2; }*)arg1 apiManager:(id)arg2;
- (bool)addParameters;
- (id)apiManager;
- (id)customChannelData:(id)arg1 ofParamID:(unsigned int)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)dealloc;
- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (bool)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4;
- (bool)hostIsFCP;
- (bool)hostIsMotion;
- (id)initWithAPIManager:(id)arg1;
- (bool)isACEScctGammaCorrected;
- (void*)newNodeForCorrector;
- (bool)oscIsPublishable:(bool)arg1;
- (bool)overrideRender:(id)arg1 withOutputImage:(id)arg2 inputImage:(id)arg3 input:(void*)arg4 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg5;
- (bool)parameterChanged:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 paramID:(unsigned int)arg3 customChannelData:(id)arg4;
- (id)parameterCreationAPI;
- (id)properties;
- (bool)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)resync:(id)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (bool)resync:(id)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2 paramID:(unsigned int)arg3 customChannelData:(id*)arg4;
- (void)resyncOnce:(id)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)setParameters:(id)arg1 onNodeCorrector:(void*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)variesOverTime;
- (id)versionsingAPI;

@end
