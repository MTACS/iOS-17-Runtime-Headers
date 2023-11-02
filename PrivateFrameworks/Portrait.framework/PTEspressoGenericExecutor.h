
@interface PTEspressoGenericExecutor : NSObject {
    void * _ctx;
    NSObject<OS_dispatch_queue> * _espressoCallbackQueue;
    NSMutableArray * _inputInterleavedToPlanarConversion;
    NSMutableDictionary * _inputsMap;
    <MTLComputePipelineState> * _interleavedToPlanar;
    PTMetalContext * _metalContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    NSString * _networkVersion;
    NSMutableArray * _outputPlanarToInterleavedConversion;
    NSMutableDictionary * _outputsMap;
    void * _plan;
    <MTLComputePipelineState> * _planarToInterleaved;
    NSMutableArray * _tensorSwap;
    NSURL * _url;
}

+ (unsigned long long)getEspressoMetalDeviceId:(id)arg1;

- (void).cxx_destruct;
- (short)bindBuffers:(id)arg1 toMap:(id)arg2 isInput:(bool)arg3;
- (unsigned int)bindInputResourceWithName:(id)arg1 to:(struct __CVBuffer { }*)arg2;
- (short)bindTensorSwaps:(id)arg1;
- (unsigned int)convertBindInput:(id)arg1;
- (unsigned int)convertBindOutput:(id)arg1;
- (void)convertInterleavedWithMetalContext:(id)arg1 inInterleaved:(id)arg2 outPlanar:(id)arg3;
- (void)convertPlanarWithMetalContext:(id)arg1 inPlanarTexture:(id)arg2 outInterleaved:(id)arg3;
- (void)dealloc;
- (unsigned int)execute;
- (unsigned int)executeAsync;
- (unsigned int)executeAsync:(id /* block */)arg1;
- (unsigned int)executeAsync:(id /* block */)arg1 metalContext:(id)arg2;
- (id)getInputResourceWithName:(id)arg1;
- (id)getOutputResourceWithName:(id)arg1;
- (id)getResourceWithName:(id)arg1 fromMap:(id)arg2;
- (id)initWithMetalContext:(id)arg1;
- (id)initWithMetalContext:(id)arg1 url:(id)arg2 inputNames:(id)arg3 outputNames:(id)arg4 tensorSwapNames:(id)arg5 reshapeNetworkSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg6 configuration:(id)arg7;
- (id)networkVersion;
- (unsigned int)tensorSwap:(int)arg1;
- (id)texture2DArrayToTexture2D:(id)arg1;

@end
