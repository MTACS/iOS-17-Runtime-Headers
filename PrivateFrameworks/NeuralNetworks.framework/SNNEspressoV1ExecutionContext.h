
@interface SNNEspressoV1ExecutionContext : NSObject {
    SNNComputePrecision * _computePrecision;
    NSArray * _computeUnits;
    void * _context;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _cppNetwork;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    void * _plan;
    SNNComputeUnit * _primaryComputeUnit;
}

@property (nonatomic, readonly) SNNComputePrecision *computePrecision;
@property (nonatomic, readonly) NSArray *computeUnits;
@property (readonly) void*context;
@property (readonly) NSArray *globalNames;
@property (readonly) NSArray *inputNames;
@property (readonly) struct { void *x1; int x2; } network;
@property (readonly) NSArray *outputNames;
@property (readonly) void*plan;
@property (nonatomic, readonly) SNNComputeUnit *primaryComputeUnit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computePrecision;
- (id)computeUnits;
- (void*)context;
- (unsigned long long)dataTypeForBlobWithName:(id)arg1;
- (unsigned long long)dataTypeForInputWithName:(id)arg1;
- (unsigned long long)dataTypeForOutputWithName:(id)arg1;
- (void)dealloc;
- (void)deallocEspressoResources;
- (id)globalNames;
- (id)initWithMILProgram:(id)arg1 primaryComputeUnit:(id)arg2 computeUnits:(id)arg3 preferredMetalDevice:(id)arg4 computePrecision:(id)arg5 error:(id*)arg6;
- (id)inputAndOutputNames;
- (id)inputNames;
- (struct { void *x1; int x2; })network;
- (id)outputNames;
- (void*)plan;
- (id)primaryComputeUnit;
- (unsigned long long)rawSizeForInputWithName:(id)arg1;
- (unsigned long long)rawSizeForOutputWithName:(id)arg1;
- (id)shapeForBlobWithName:(id)arg1;
- (id)shapeForInputWithName:(id)arg1;
- (id)shapeForOutputWithName:(id)arg1;

@end
