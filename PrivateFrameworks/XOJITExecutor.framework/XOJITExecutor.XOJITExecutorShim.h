
@interface XOJITExecutor.XOJITExecutorShim : NSObject {
    void jit;
}

- (void).cxx_destruct;
- (id)init;
- (id)initFromXPCConnection:(id)arg1;

@end
