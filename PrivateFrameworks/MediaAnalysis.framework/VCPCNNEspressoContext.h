
@interface VCPCNNEspressoContext : NSObject {
    void * _espressoContext;
}

@property (nonatomic, readonly) void*espressoContext;

+ (void*)createContextPreferred;
+ (void*)createContextWithForceCPU;
+ (void*)createContextWithMPSGraph;
+ (void*)sharedContextPreferred:(bool)arg1;
+ (void*)sharedContextWithForceCPU:(bool)arg1;
+ (void*)sharedContextWithMPSGraph:(bool)arg1;
+ (bool)supportGPU;

- (void)dealloc;
- (void*)espressoContext;
- (id)initWithForceCPU:(bool)arg1 forceNNGraph:(bool)arg2 shared:(bool)arg3;

@end
