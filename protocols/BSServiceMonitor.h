
@protocol BSServiceMonitor <NSObject>

@required

- (void)serialCallOut_didUpdateEndpointEnvironments:(NSDictionary *)arg1;
- (NSString *)service;

@end
