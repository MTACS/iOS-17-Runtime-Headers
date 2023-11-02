
@protocol SWSystemSleepMonitorProvidingDelegate <NSObject>

@required

- (void)systemPowerChanged:(unsigned int)arg1 notificationID:(void*)arg2;

@end
