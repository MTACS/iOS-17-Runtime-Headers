
@interface BCHIDBrtControl : BCBrtControl {
    unsigned int  _boostFactorNotification;
    struct IONotificationPort { } * _boostFactorNotificationPort;
    unsigned long long  _brighntessUpdateCounter;
    HIDElement * _brightnessElement;
    HIDElement * _brightnessFadeElement;
    NSObject<OS_dispatch_queue> * _brightnessUpdateQueue;
    float  _brightnessUpdateTarget;
    HIDDevice * _hidBrightnessDevice;
    unsigned int  _hidBrightnessService;
    double  _nits;
    float  _nitsBoostFactor;
    float  _nitsScaler;
    unsigned long long  _registryID;
}

@property (readonly) unsigned long long registryID;

+ (id)copyAvailableControls;
+ (id)newMonitorWithHandler:(id /* block */)arg1 error:(id*)arg2;

- (bool)_getDeviceNits:(double*)arg1;
- (bool)_setDeviceNits:(double)arg1;
- (void)addDisplayService:(unsigned int)arg1;
- (float)boostFactorFromIOFixed:(int)arg1;
- (id)copyModuleIdentifier;
- (id)copyProperty:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (double)getNitsWithError:(id*)arg1;
- (id)init;
- (id)initWithService:(unsigned int)arg1;
- (void)refreshBoostFactor;
- (unsigned long long)registryID;
- (void)removeDisplayService;
- (void)setBoostFactor:(float)arg1;
- (void)setDisplayService:(unsigned int)arg1;
- (bool)setNits:(double)arg1 error:(id*)arg2;
- (bool)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3;

@end
