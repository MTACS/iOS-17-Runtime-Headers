
@protocol FPDProcessMonitorDelegate <NSObject>

@required

- (void)processMonitor:(FPDProcessMonitor *)arg1 didBecomeForeground:(bool)arg2;

@end
