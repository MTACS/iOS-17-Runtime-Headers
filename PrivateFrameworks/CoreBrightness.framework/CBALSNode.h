
@interface CBALSNode : NSObject {
    unsigned int  _alsIOService;
    struct __IOHIDServiceClient { } * _alsService;
    bool  _colorSupport;
    CBALSEvent * _currentALSEvent;
    long long  _digitizerFilterWindow;
    float  _fastIntegrationTime;
    NSObject<OS_os_log> * _logHandle;
    int  _orientation;
    CBALSHotspotLocation * _overrideHotspot;
    int  _placement;
    int  _sensorType;
    float  _slowIntegrationTime;
    float  _superFastIntegrationTime;
    bool  _useProxForOcclusion;
}

@property (nonatomic, readonly) struct __IOHIDServiceClient { }*alsService;
@property (nonatomic, retain) CBALSEvent *currentALSEvent;
@property (nonatomic, readonly) long long digitizerFilterWindow;
@property (nonatomic, readonly) int orientation;
@property (nonatomic, readonly, retain) CBALSHotspotLocation *overrideHotspot;
@property (nonatomic, readonly) int sensorType;
@property (nonatomic, readonly) bool useProxForOcclusion;

- (struct __IOHIDServiceClient { }*)alsService;
- (bool)conformsToHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)copyALSEvent;
- (id)copyALSEventWithinTimeout:(float)arg1;
- (struct __IOHIDEvent { }*)copyEvent;
- (id)copyHotspotLocation;
- (id)currentALSEvent;
- (void)dealloc;
- (id)description;
- (long long)digitizerFilterWindow;
- (bool)getDigitizerFilterWindow;
- (bool)getUseProxForOcclusion;
- (bool)handleALSEvent:(id)arg1;
- (void)initALSProperties;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (bool)isColorSupported;
- (int)orientation;
- (id)overrideHotspot;
- (int)sensorType;
- (void)setCurrentALSEvent:(id)arg1;
- (bool)useProxForOcclusion;

@end
