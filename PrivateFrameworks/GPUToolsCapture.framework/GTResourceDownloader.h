
@interface GTResourceDownloader : NSObject {
    unsigned long long  _alignment;
    <MTLDeviceSPI> * _device;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    <MTLSharedEvent> * _downloadEvent;
    <MTLCommandQueue> * _downloadQueue;
    unsigned long long  _downloadValue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _framebufferPipelineMutex;
    unsigned long long  _maxGPUMemory;
    NSMutableDictionary * _pipelineCache;
    struct apr_pool_t { } * _pool;
    _Atomic unsigned long long  _usedGPUMemory;
}

- (void).cxx_destruct;
- (void)_downloadRequest:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;
- (void)_downloadRequestNew:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;
- (void)_downloadRequestOld:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;
- (void)dealloc;
- (id)downloadQueue;
- (void)downloadRequest:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1;
- (void)downloadRequest:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1 atPoint:(id)arg2;
- (void)fillGPUBuffer:(id)arg1 size:(unsigned long long)arg2 context:(id)arg3;
- (id)getFramebufferPipeline:(unsigned long long)arg1;
- (id)getGPUBuffer:(unsigned long long)arg1;
- (id)getGPUBuffer:(unsigned long long)arg1 context:(id)arg2;
- (id)getGPUIndirectCommandBuffer:(unsigned long long)arg1 context:(id)arg2 descriptor:(id)arg3;
- (id)getGPUIndirectCommandBuffer:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;

@end
