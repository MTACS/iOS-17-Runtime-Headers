
@protocol MTLFunctionPointerHandleSPI <NSObject>

@optional

- (unsigned long long)gpuAddress;
- (unsigned long long)resourceIndex;

@end
