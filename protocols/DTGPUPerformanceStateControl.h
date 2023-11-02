
@protocol DTGPUPerformanceStateControl <NSObject>

@required

- (NSDictionary *)currentState;
- (NSDictionary *)disable;
- (bool)enable:(unsigned long long)arg1;

@end
