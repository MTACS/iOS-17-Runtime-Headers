
@protocol EspressoBrick <NSObject>

@required

- (bool)hasGPUSupport;
- (id)initWithParameters:(NSDictionary *)arg1;
- (NSArray *)setupForInputShapes:(NSArray *)arg1 withParameters:(NSDictionary *)arg2;

@optional

- (NSArray *)computeDynamicOutputShape:(NSArray *)arg1;
- (void)computeOnCPUWithInputTensors:(NSArray *)arg1 outputTensors:(NSArray *)arg2;
- (void)encodeToMetalCommandBuffer:(id <MTLCommandBuffer>)arg1 inputTensors:(NSArray *)arg2 outputTensors:(NSArray *)arg3;
- (bool)hasDynamicOutputShape:(unsigned long long)arg1;
- (void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;

@end
