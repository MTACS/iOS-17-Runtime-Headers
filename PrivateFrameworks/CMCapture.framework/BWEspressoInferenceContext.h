
@interface BWEspressoInferenceContext : NSObject {
    void * _espressoContext;
    int  _executionTarget;
    unsigned long long  _options;
    void * _rootIntermediateBufferPlan;
    bool  _shareIntermediateBuffer;
    NSString * _sharedBufferNetworksPath;
}

@property (nonatomic, readonly) void*espressoContext;
@property (nonatomic, readonly) int executionTarget;
@property (getter=isPrepared, nonatomic, readonly) bool prepared;

+ (void)initialize;

- (int)configureIntermediateBufferSharingForPlanPostbuild:(void*)arg1;
- (int)configureIntermediateBufferSharingForPlanPrebuild:(void*)arg1;
- (void)dealloc;
- (id)description;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1;
- (void*)espressoContext;
- (int)executionTarget;
- (id)initWithExecutionTarget:(int)arg1;
- (id)initWithExecutionTarget:(int)arg1 shareIntermediateBuffer:(bool)arg2;
- (bool)isPrepared;
- (int)prepareForInference;

@end
