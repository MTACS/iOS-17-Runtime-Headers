
@interface TCComputeDeviceManager : NSObject {
    TCComputeDevice * _defaultDevice;
    <NSObject> * _deviceObserver;
    bool  _forceCPU;
    TCComputeDevice * _pipelineDevicePrimary;
    TCComputeDevice * _pipelineDeviceSecondary;
}

@property (retain) TCComputeDevice *defaultDevice;
@property (retain) TCComputeDevice *pipelineDevicePrimary;
@property (retain) TCComputeDevice *pipelineDeviceSecondary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultDevice;
- (id)initSingleton;
- (id)initWithDevices:(id)arg1 forceCPU:(bool)arg2;
- (id)pipelineDevicePrimary;
- (id)pipelineDeviceSecondary;
- (void)selectDevices:(id)arg1 group1:(id)arg2 group2:(id)arg3;
- (void)setDefaultDevice:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setPipelineDevicePrimary:(id)arg1;
- (void)setPipelineDeviceSecondary:(id)arg1;

@end
