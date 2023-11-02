
@interface CMIInferenceNetworkEspressoV1 : NSObject <CMIInferenceNetwork> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _inputs;
    NSArray * _instances;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    NSArray * _outputs;
    void * _plan;
    int  _planSubmitCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) struct { void *x1; int x2; } network;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, readonly) void*plan;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_planSubmit;
- (int)_planSubmitComplete:(const struct { int x1; int x2; char *x3; }*)arg1 planSubmitId:(int)arg2;
- (int)allocateInstancesWithDevice:(id)arg1 instanceCount:(unsigned long long)arg2 useTextureArrays:(bool)arg3;
- (int)bindIOPortsWithInputNames:(id)arg1 withOutputNames:(id)arg2;
- (void)dealloc;
- (id)dispatchQueue;
- (id)getInputs;
- (id)getInstanceWithIndex:(unsigned long long)arg1;
- (id)getOutputs;
- (id)initWithDispatchQueue:(id)arg1;
- (id)inputs;
- (int)loadNetworkWithPath:(id)arg1 context:(void*)arg2;
- (struct { void *x1; int x2; })network;
- (id)outputs;
- (void*)plan;

@end
