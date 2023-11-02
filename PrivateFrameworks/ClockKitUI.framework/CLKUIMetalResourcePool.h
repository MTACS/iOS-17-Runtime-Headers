
@interface CLKUIMetalResourcePool : NSObject {
    NSObject<OS_dispatch_queue> * _buffersQueue;
    id /* block */  _creationBlock;
    unsigned long long  _expectedCountPerFrame;
    NSMutableArray * _resourcePool;
}

+ (id)bufferPoolWithLength:(unsigned long long)arg1 andOptions:(unsigned long long)arg2 expectedCountPerFrame:(unsigned long long)arg3;
+ (id)texturePoolWithDescriptor:(id)arg1 expectedCountPerFrame:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)dequeueReusableResource;
- (id)dequeueReusableResourceForUseOnCommandBuffer:(id)arg1;
- (id)initWithCreationBlock:(id /* block */)arg1 expectedCountPerFrame:(unsigned long long)arg2;
- (void)returnReusableResource:(id)arg1;

@end
