
@interface GTDownloadContext : NSObject {
    NSMutableArray * _MTLResources;
    <MTLAccelerationStructureCommandEncoderSPI> * _accelerationStructureCommandEncoder;
    <MTLBlitCommandEncoder> * _blit;
    unsigned long long  _blitRequestCount;
    NSArray * _captureAccelerationStructures;
    <MTLCommandBuffer> * _command;
    <MTLComputeCommandEncoder> * _computeCommandEncoder;
    NSMutableArray * _objects;
    NSMutableArray * _originalMTLResources;
    struct apr_pool_t { } * _pool;
    <MTLCommandQueue> * _queue;
    struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; } * _requests;
    unsigned long long  _usedGPUMemory;
}

@property (nonatomic, readonly) NSArray *captureAccelerationStructures;
@property (nonatomic, retain) NSMutableArray *objects;
@property (nonatomic) struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*requests;
@property (nonatomic) unsigned long long usedGPUMemory;

- (void).cxx_destruct;
- (id)accelerationStructureCommandEncoder;
- (id)blitCommandEncoder;
- (id)captureAccelerationStructures;
- (id)computeCommandEncoder;
- (void)dealloc;
- (void)flush;
- (void)flushWithCallback:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 forRequest:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg2;
- (id)newCommandBuffer;
- (id)objects;
- (struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)requests;
- (void)retainMTLResource:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setRequests:(struct apr_array_header_t { struct apr_pool_t {} *x1; int x2; int x3; int x4; char *x5; }*)arg1;
- (void)setUsedGPUMemory:(unsigned long long)arg1;
- (unsigned long long)usedGPUMemory;

@end
