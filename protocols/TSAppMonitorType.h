
@protocol TSAppMonitorType

@required

- (bool)isActive;
- (bool)isTracking;
- (<TSAppMonitorType> *)onWindowDidBecomeBackgroundWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<TSAppMonitorType> *)onWindowWillBecomeForegroundWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setIsActive:(bool)arg1;

@end
