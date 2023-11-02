
@protocol SOSPersistentTimerLocationManagerDelegate <NSObject>

@required

- (bool)locationIsValidToSend:(CLLocation *)arg1;
- (void)sosPersistentTimerLocationManagerTimerFired:(SOSPersistentTimerLocationManager *)arg1 location:(CLLocation *)arg2;

@end
