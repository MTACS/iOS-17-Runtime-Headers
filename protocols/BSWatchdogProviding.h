
@protocol BSWatchdogProviding <NSObject>

@required

- (double)watchdogTimeout;

@optional

- (bool)shouldWatchdog:(id*)arg1;

@end
