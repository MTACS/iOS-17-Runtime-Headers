
@protocol AXImageMonitorObserver <NSObject>

@required

- (void)imageMonitor:(id <AXImageMonitor>)arg1 didAddImage:(NSString *)arg2;
- (void)iterateInitialImageListForImageMonitor:(id <AXImageMonitor>)arg1;

@end
