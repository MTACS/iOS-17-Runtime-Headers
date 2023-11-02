
@interface BWDeviceThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _registrationToken;
    id /* block */  _thermalHandler;
    int  _thermalLevel;
    struct OpaqueFigSimpleMutex { } * _thermalNotificationLock;
}

@property (readonly) int thermalLevel;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)setThermalHandler:(id /* block */)arg1;
- (int)thermalLevel;

@end
