
@protocol MTLSamplerState <NSObject>

@required

- (<MTLDevice> *)device;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (NSString *)label;

@end
