
@protocol MTLSamplerStateSPI <MTLSamplerState>

@required

- (unsigned long long)pixelFormat;

@optional

- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (unsigned long long)resourceIndex;
- (unsigned long long)uniqueIdentifier;

@end
