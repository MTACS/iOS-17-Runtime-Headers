
@protocol DTKPTriggerCounterAllocatorProvider <NSObject>

@required

- (DTKPCPUCounterAllocator *)counterAllocator;
- (DTKPCPUCounterAllocator *)queryCounterAllocator;

@end
