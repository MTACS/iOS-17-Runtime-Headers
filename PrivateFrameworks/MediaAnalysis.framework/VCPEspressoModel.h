
@interface VCPEspressoModel : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    void * _context;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    void * _plan;
}

- (void).cxx_destruct;
- (bool)buildModelWithConfig:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)freeModel;
- (id)initModelWithName:(id)arg1 andConfig:(id)arg2;
- (int)loadModel:(id)arg1;
- (bool)prepareModelWithFile:(id)arg1 engine:(int)arg2 config:(id)arg3 error:(id*)arg4;
- (bool)updateModelWithConfig:(id)arg1 error:(id*)arg2;

@end
