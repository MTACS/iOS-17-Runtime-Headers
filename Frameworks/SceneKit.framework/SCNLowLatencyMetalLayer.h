
@interface SCNLowLatencyMetalLayer : CAMetalLayer

- (bool)lowLatency;
- (unsigned long long)maximumDrawableCount;

@end
