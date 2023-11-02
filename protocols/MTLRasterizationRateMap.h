
@protocol MTLRasterizationRateMap <NSObject>

@required

- (void)copyParameterDataToBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
- (<MTLDevice> *)device;
- (NSString *)label;
- (unsigned long long)layerCount;
- (struct { float x1; float x2; })mapPhysicalToScreenCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { float x1; float x2; })mapScreenToPhysicalCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })parameterBufferSizeAndAlign;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalGranularity;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalSizeForLayer:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })screenSize;

@end
