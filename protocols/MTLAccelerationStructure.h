
@protocol MTLAccelerationStructure <MTLResource>

@required

- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)size;

@end
