
@interface FigCapturePowerMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } * _lock;
    float  _maxTorchLevel;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned int  _powerPressureLevel;
    int  _registrationToken;
    id /* block */  _torchHandler;
}

@property (readonly) float maxTorchLevel;
@property (readonly) unsigned int powerPressureLevel;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (float)maxTorchLevel;
- (unsigned int)powerPressureLevel;
- (void)setPowerHandler:(id /* block */)arg1;

@end
