
@protocol SBFAnalyticsBackendEventHandling <NSObject>

@required

- (bool)handleEvent:(unsigned long long)arg1 withContext:(id <SBFAnalyticsBackendEventContextProviding>)arg2;

@end
