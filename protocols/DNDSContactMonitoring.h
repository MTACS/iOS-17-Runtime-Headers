
@protocol DNDSContactMonitoring <NSObject>

@required

- (void)addListener:(id <DNDSContactMonitorListener>)arg1;
- (void)removeListener:(id <DNDSContactMonitorListener>)arg1;

@end
