
@protocol TVRUIDeviceQuery <NSObject>

@required

- (bool)hasStarted;
- (void)startQuery:(id <TVRUIDeviceSearchDelegate>)arg1;
- (void)stop;

@end
