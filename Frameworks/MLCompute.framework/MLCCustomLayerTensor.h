
@interface MLCCustomLayerTensor : NSObject <NSCopying> {
    NSData * _cpuBuffer;
    MLCTensorDescriptor * _descriptor;
    id  _gpuBuffer;
}

@property (nonatomic, retain) NSData *cpuBuffer;
@property (nonatomic, readonly, retain) MLCTensorDescriptor *descriptor;
@property (nonatomic, retain) id gpuBuffer;
@property (nonatomic, readonly) MLCTensorData *hostData;
@property (nonatomic, readonly) <MTLBuffer> *metalBuffer;

+ (id)customLayerTensorWithDescriptor:(id)arg1 cpuBuffer:(id)arg2;
+ (id)customLayerTensorWithDescriptor:(id)arg1 gpuBuffer:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpuBuffer;
- (id)description;
- (id)descriptor;
- (id)gpuBuffer;
- (id)hostData;
- (id)initWithTensorDescriptor:(id)arg1 cpuBuffer:(id)arg2 gpuBuffer:(id)arg3;
- (id)metalBuffer;
- (void)setCpuBuffer:(id)arg1;
- (void)setGpuBuffer:(id)arg1;

@end
